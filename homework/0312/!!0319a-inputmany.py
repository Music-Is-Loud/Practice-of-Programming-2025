num={"2":13,"A":12,"K":11,"Q":10,"J":9,"10":8,"9":7,"8":6,"7":5,"6":4,"5":3,"4":2,"3":1}
kind={"h":4,"s":3,"d":2,"c":1}
def mykey(s):
    return kind[s[0]]+num[s[1:]]*10
import sys
for line in sys.stdin:#需要用这个方法读入多行数据
    line=line.strip().split()
    if not line:
        continue
    line.sort(key=mykey,reverse=True)
    print(' '.join(line),end='\n')

