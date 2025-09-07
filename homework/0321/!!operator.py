exit = None
class TaggedList:  #元素带标签的列表
    def __init__(self,val,tag):
        self.val=val
        self.tag=tag
        self.dic={}
        for i in range(len(tag)):
            self.dic[tag[i]]=i
    def __getitem__(self,index):
        if isinstance(index,int):
            return self.val[index]
        else:
            return self.val[self.dic[index]]
    def __len__(self):
        return len(self.val)
    def __str__(self):
        res=""
        for i in self.dic:
            res=res+i+":"+str(self.val[self.dic[i]])+","
        return res
    def __contains__(self,val):#in
        return val in self.val
    def __setitem__(self,index,newval):#需要修改
        if isinstance(index,int):
            self.val[index]=newval
        else:
            self.val[self.dic[index]]=newval

a = TaggedList([70,80,90,100],["语文","数学","英语","物理"])
print(len(a),78 in a, 80 in a) #>>4 False True
print(str(a)) #>>语文:70,数学:80,英语:90,物理:100,
print(a[0],a['数学']) #>>70 80   标签也可以作为下标访问元素
a[1] = a['物理'] = 85
print(a) #>>语文:70,数学:85,英语:90,物理:85,