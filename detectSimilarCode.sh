#!/bin/sh

sources="Example"
process="Process"
compile="Compile"
transfer="Transfer"
hashes="Hash"
result="Result"

echo "You can give 2 arguments: folder sources, result"

if [ $# -ge 1 ]
then
	sources=$1
	if [ $# -ge 2 ]
	then
		result=$2
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

ls "$sources"/*.cpp | xargs -n 1 basename > "ls.txt"
exec < "ls.txt"

while read line
do
	echo $line
	./process $line "$sources" $process
	g++ -E "./$process/$line" > "./$compile/$line"
	./transfer $line $compile $transfer
	python3.6 hashing.py 15 $line
done

python3.6 checkHash.py 15 1 "ls.txt" "$sources" $hashes "$result" $transfer

rm -rf "$process"/*.cpp
rm -rf "$compile"/*.cpp
rm -rf "$transfer"/*.cpp
rm -rf "$hashes"/*.cpp
