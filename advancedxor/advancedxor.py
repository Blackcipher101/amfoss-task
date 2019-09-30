import string
import hashlib
import binascii


st=input()
tounhex =[]
#------------------------------------dehexing------------------------------------------'
for i in range (0,len(st),2):
    tounhex.append(st[i]+st[i+1])
uhex=[]
for i in range (len(tounhex)):
    new=bytearray.fromhex(tounhex[i]).decode()
    uhex.append(new)
strin=""
for ele in range (len(uhex)):
    strin+=(str(uhex[ele]))
print(strin)
#-----------------------------dehexingkey---------------------------------------------
with open("example.txt") as fileobject:
    for line in fileobject:
        orginal=""
        flag=0
        print(line)
        binarykey=line.encode("utf-8")
        hexkey=binarykey.hex()
        keylist=[]
        for i in range (0,len(hexkey),2):
            keylist.append(hexkey[i]+hexkey[i+1])
        for i in range(len(strin)):
            orginal += chr(ord(strin[i]) ^ int(keylist[i%5], 16))
            if orginal[i] not in string.printable:
                flag=1
                break
        if flag!=1:
            print(orginal)
