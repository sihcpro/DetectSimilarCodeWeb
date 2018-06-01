import sys
import pickle

hashLength= 10
fileName= "main08.cpp"
folderInput = "Transfer"
folderOutput= "Hash"

if len( sys.argv ) >= 2:
	hashLength= int( sys.argv[1] )
if len( sys.argv ) >= 3:
	fileName= sys.argv[2]
if len( sys.argv ) >= 4:
	folderInput = sys.argv[3]
if len( sys.argv ) >= 5:
	folderOutput= sys.argv[4]

f = open( folderInput+'/'+fileName, "r" )
contents= ""
p = []
for line in f:
	p.append(line[:-1])
	
for i in range(len(p)-2):
	contents += p[i]

f.close()

contents= list( map( ord, contents.upper() ) )
s= 0
skip= 31
space= 127 - skip - 26
m= 1

ss= ' '
for i in range( hashLength ):
	ss= chr( contents[i] )
	if contents[i] >= 123:
		contents[i]-= 26
	contents[i]-= skip
	s= s*space + contents[i]
	m*= space
m= space**(hashLength-1)

hashing= [s]
for i in range( hashLength, len( contents ) ):
	s-= ( contents[i-hashLength] * m )
	s= s*space + contents[i]
	hashing.append(s)

pickle.dump(hashing, open( folderOutput+'/'+fileName, 'wb'))
