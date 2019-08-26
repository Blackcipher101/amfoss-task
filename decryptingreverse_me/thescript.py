import string
st=input()
tounhex =[]
for i in range (0,len(st),2):
    tounhex.append(st[i]+st[i+1])
uhex=[]
for i in range (len(tounhex)):
    new=bytearray.fromhex(tounhex[i]).decode()
    uhex.append(new)
print(uhex)
strin=""
for ele in range (len(uhex)):
    strin+=(str(uhex[ele]))
print(strin)
retapo= []
for op in range(len(strin)):
        neardone = chr(ord(strin[op])^10)
        retapo.append(neardone)
print(retapo)        
upper = string.ascii_uppercase
lower = string.ascii_lowercase
digits = string.digits
for i in range (len(retapo)):
    if retapo[i].isupper() is True:
        pos = upper.index(retapo[i])
        retapo[i] = upper[pos - 3]
    if retapo[i].islower() is True:
        pos= lower.index(retapo[i])
        retapo[i] = lower[pos - 3]
    if retapo[i].isdigit() is True:
        pos = digits.index(retapo[i])
        retapo[i] = digits[pos - 3]
needed=""
for d in range (len(retapo)):
    needed+= retapo[d]
print(needed)
