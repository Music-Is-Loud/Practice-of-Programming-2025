import sys
char = sys.stdin.read(1)
if(ord(char)%2==1):
    print("YES")
else:
    print("NO")