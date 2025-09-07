## L6 python面向对象

所有类都派生自object类

构造、析构函数只能有一个

类的成员变量可以随时添加

#### 1.常见类函数

```python
def __init__(self,x=0,y=0):
def __eq__(self,other)#重载==，实现了这个就可变，不可hash，不能当作dict's keys
#类的比较：一般比较的是ID（地址），否则要重新定义def __eq__(self,  )
def __ls__(self,other)#less than 重载<
def __str__(self):
 #重载类型转换构造函数 str
def __repr__(self):
  #返回可执行字符串
```

#### 2.静态成员变量

随类定义，只能通过   类名.变量名  访问，如果是对象名.变量名，在不修改的时候可访问

#### 3.类方法、静态方法、类实例方法

##### 类方法

可以通过类名或者实例对象来调用，当类方法被调用时，python会自动传递类本身作为第一个参数

```python
class myClass:
  class_attr=10
  
	@classmethod#装饰器，提示接下来的是类方法
	def func(cls,x):#cls是一个约定的命名，指向类本身，允许在方法中操作类的属性/调用其他类方法
    print(cls.class_attr)
    print(x)
myClass.func(5)
obj=myClass()
obj.func(7)
```

可以直接修改类本身而不需要创建实例，可以直接实现多个构造函数

```python
class MyClass:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    @classmethod
    def from_string(cls, s):
        x, y = map(int, s.split(','))
        return cls(x, y)
 
obj = MyClass.from_string('5,10')

```

##### 实例方法

正常的成员函数，self

##### 静态方法

不与类的实例绑定，不与实例的属性直接交互，通过类名直接调用，无需创建类实例

```python
class MyClass:
    @staticmethod
    def static_method(x, y):
        return x + y
result = MyClass.static_method(3, 4)
```

#### 4.私有属性

__n（不可访问，认为是私有的了）

_类名 __ n (通过改写名称仍可访问)

是一种提示，告诉开发者这个不可修改，但是实际上是一种自欺欺人

#### 5.可哈希

可哈希：不可变对象，元组字符串

不可哈希：可变对象，集合字典列表

自定义对象默认可哈希，哈希值为其id，当重载了

```
__eq__不可哈希
需要再重载__hash__才变为 可哈希
```

对象作为字典的键：对象地址而非对象内容

把对象的值作为字典的键：重写