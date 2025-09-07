s=list(map(int,input().split()))
n,m=s[0],s[1]
menu={}
ans=0
for i in range(m):
    s=input().split()
    menu[s[0]]=[int(s[1]),int(s[2])]
for i in range(n):
    s=input().split()
    for j in range(3):
        if menu[s[j]][1]>0:
            menu[s[j]][1]-=1
            ans+=menu[s[j]][0]
print(ans)