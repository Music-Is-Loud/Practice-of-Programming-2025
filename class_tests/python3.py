class Fib:
    def __init__(self,max):
        self.max=max
        #self.a=0
        #self.b=1
        #在iter初始而非init初始可以保证能多次调用
    def __iter__(self):
        self.a=0
        self.b=1
        return self
    def __next__(self):
        fib=self.a
        if fib>self.max:
            raise StopIteration
        self.a,self.b=self.b,self.a+self.b
        return fib
f=Fib(10)
for i in f:
    print(i,end=' ')
print()
for i in f:
    print(i,end=' ')