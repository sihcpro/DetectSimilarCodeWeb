#!/bin/sh

sources="Example"
process="Process"
compile="Compile"
transfer="Transfer"
hashes="Hash"
result="Result"

echo "You can give 6 arguments: folder sources, process, compile, transfer, hashes, result"

if [ $# -ge 1 ]
then
	sources=$1
	if [ $# -ge 2 ]
	then
		process=$2
		if [ $# -ge 3 ]
		then
			compile=$3
			if [ $# -ge 4 ]
			then
				transfer=$4
				if [ $# -ge 5 ]
				then
					hashes=$5
					if [ $# -ge 6 ]
					then
						result=$6
					fi
				fi
			fi
		fi
	fi
fi

checkFolder () {
	if [ -d $2 ]
	then
		echo "$1 is : ./$2"
		rm ./$2/*.cpp
	else 
		mkdir "$2"
		echo "$1 is : ./$2 had been created"
	fi
}

# checkFolder "Source  : " "$sources"
checkFolder "Process : " "$process"
checkFolder "Compile : " "$compile"
checkFolder "Transfer: " "$transfer"
checkFolder "Hash    : " "$hashes"
checkFolder "Result  : " "$result"

ls $sources > "ls.txt"
exec < "ls.txt"
while read line
do
	echo $line
	./process $line $sources $process
	g++ -E "./$process/$line" > "./$compile/$line"
	./transfer $line $compile $transfer
	python3.6 hashing.py 15 $line
done

python3.6 checkHash.py 15 1 "ls.txt" $sources $hashes $result $transfer
