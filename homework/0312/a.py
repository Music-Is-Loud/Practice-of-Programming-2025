def decode(s):
    if len(s)==0:
        return ""
    if len(s)==1:
        return s
    mid=(len(s)-1)//2
    return decode(s[1:mid+1])+s[0]+decode(s[mid+1:])
s=input()
print(decode(s))