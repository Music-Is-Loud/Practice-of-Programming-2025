class A:
	def __init__(self,x):
		self.x = x
	def __lt__(self,other):
		if isinstance(other,A):
			return self.x<other.x
		else:
			return self.x<other
	def __ge__(self,other):
		return self.x>=other.x
'''def __lt__(self,other):
	return self.x<other'
	不能重复定义!会被覆盖!'''


            
	

    

a,b,c = map(int,input().split())
print(isinstance(A(2),A))
print(A(a) < A(b))
print(A(a) >= A(c))
print(A(a) < c)