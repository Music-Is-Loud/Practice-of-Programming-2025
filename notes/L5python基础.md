

## python基础

用\放在行末，和()括住整个语句换行

#### 1.数据类型

使用type()读取类型

使用(isinstance(a,str))判断是否是某个类型

数字：Int支持任意长的数

​	   float支持科学计数法1.5E6

​	   1.5*10^6,complex 

字符串：str

列表：list

元组：tuple

字典：dict

##### 一些性质

相当于类名，可以创建对象  a=str()

0b二进制 0o八进制 0x十六进制

空的str tuple list dict都是False

##### 类型转换

Int(x,[,base])将字符串x强制转换成十进制整数，base是x的进制

Float(x) 字符串变浮点数

str(x) x转字符串，用户友好

repr(x) x转带引号的字符串，开发者友好

```python
>>> repr("hello")
"'hello'"
>>> str("hello")
'hello'

>>> print(repr("hello"))
'hello'
>>> print(str("hello"))
hello

```

**join输出字符串拼接**:

```python
str=''.join(newstr)
#把列表newstr变成字符串
```

**读入多组数据未知组数**

```python
import sys
for line in sys.stdin:#需要用这个方法读入多行数据
    line=line.strip().split()
```



#### 2.浮点型

/结果是浮点数，无论是否整除

有小数的算术表达式，结果就是小数

##### 判断浮点数相等

```python
import sys
def equal_float(a,b):
	return abs(a-b)<=sys.float_info.epsilon
#sys.float_info.epsilon最小浮点数间隔
```

##### 高精度浮点数

```python
import decimal
from decimal import *
a=decimal.Decimal(98)
b=decimal.Decimal("1.23456789")
c=decimal.Decimal(a+b)#精度缺省默认为精确度28位
getcontext().prec=5#设置精度为默认精确度5位
print(c)#仍然是原来的
c=a+b
print(c)#5位
```

#### 3.is 与==

python中的变量都是指针（内存地址），列表元素也是指针

对变量赋值就是变量指向某处，用一个变量赋值另一个变量意味着两个变量指向同一个地方（内存地址）

a is b==True  a和b指向同一个地方

a==b说明a和b指向的地方放的东西一样

对int,float,complex,str,turple来说，a is b无意义，本身不会变,只要值一样，则指向的地址一样

list,dict则可能会变

#### 4.输入输出

##### 输入

```python
lst=input.split()
#输入根据空格拆分成列表
```

##### 输出

print多个

```python
>>> print(1,2,3,end="")
1 2 3>>> print(1,2,3,end=",")
1 2 3,
```

###### print格式控制符，只能在字符串中

%s %d %f 

%.nf n精确度，四舍六入5随机，

%(元组)

```
>>> print("My name is %s and I am %d years old"%('tom',10))
My name is tom and I am 10 years old

```

##### 输入输出重定向

```python
import sys
f=open("t.txt","r")#只读
g=open("d.txt","w")#只写，覆盖
sys.stdin=f#输入重定向到f
sys.stdout=g#输入重定向到g
s=input() #input来自t.txt
print(s)#output to d.txt
f.close()
g.close()
```

#### 5.循环

```python
for site in sites:
  if site=='IBM':
    break
else:
  print("No break")
 #执行循环语句中的break才会执行break  	
```

Pass: 什么都不做

#### 6.字符串

##### 字符串不可修改

##### 可以用'' "" """ """

‘’中的”“会被认为是字符

```python
>>> print(""" I said "he said 'hello'" """)
 I said "he said 'hello'" 
```

三双引号中可以包含换行符、制表符及其他特殊字符

```python
>>> print("""I love**\t**you""")#制表符
I love**	**you
```

##### 转义字符

\允许换行

\n输出换行

r不转义

```python
>>> print("hello\nworld")
hello
world
>>> print("this\
... is\
... good")
thisisgood

>>> print("ab\ncd")
ab
cd
>>> print(r"ab\ncd")
ab\ncd

```

```python
print(r'ab\ncd')#ab\ncd
```

##### in

判断子串（连在一起的）

##### 字符串和数的转换

```python
c=int(x)#c is int but x is str
#如果x是小数，去尾取整
strr=str(c)#c is int but strr is str
eval(x) #consider strx as python的表达式并求值

```

```python
>>> eval("1+2")
3
>>> eval("5+9==10")
False
>>> print(eval("4.5"))
4.5
```

##### 字符串函数

###### count 求子串出现的次数

```python
s.count('AA')
```

###### upper lower转大小写

但并不是直接作用在字符串上的

```python
>>> s="abc"
>>> s.upper()
'ABC'
```

###### find函数，rfind函数，index,rindex函数

find找不到，返回-1；rfind从右往左找

index找不到报错

```python
>>> s="1234abc567abc12"
>>>print(s.find("ab"))
4
>>> print(s.rfind("ab"))
10


>>>try:
...     s.index("afb")
... except Exception as e:
...     print(e)
substring not found
```

###### replace替换

也不直接作用在原来字符串上，可以控制次数

```python
>>> b=s.replace("abc","ABC")
>>> print(b)
1234ABC567ABC12
>>> b=s.replace("abc","ABC",1)
>>> print(b)
1234ABC567abc12
```

###### .isupper()   .islower()  .isdigit()

判断是否是大写/小写/数字

Upper/lower

如果 string 中包含至少一个区分大小写的字符，并且所有这些(区分大小写的)字符都是小写，则返回 True，否则返回 False

digit

如果 string 只包含数字则返回 True 否则返回 False.

###### startswith endswith

开头结尾

###### strip

.strip()/ .lstrip() ./rstrip()

除去两端的空白字符/左边的/右边的

空白字符：空格，‘\r''\t''\n'

.strip(s)

除去两端的s中的字符

###### split

分割结果是字符串列表 空串也保留，支持多个字符分割

##### *字符串格式化

{序号：宽度.精度.数据类型}

右对齐> 左对齐< 中对齐^

```python
>>> x="Hello {0} {1:10},you get ${2:0.4f}".format("Mr.","Jack",3.2)
>>> print(x)
Hello Mr. Jack      ,you get $3.2000

```

##### 格式控制符

%s 字符串

%d整数

%f小数

%.nf 一个小数保留后N位，四舍六入五不确定

只在字符串中

```python
>>> print("%d%s"%(18,"hello"))
18hello
```

%后是具体内容实现，元组或者一个

##### 字符串编码

###### ASCII

###### GB2312

相邻2个最高位为1的字节表示一个汉字

###### Unicode 

大多数操作系统用这个，每个字符由2个字节组成，ASCII第一个字节补0，几乎涵盖所有文字

Python字符串是unicode编码，ord()也取unicode编码

###### Utf-8

可变长编码1-6字节

英文字母，数字，符号1字节；汉字3字节

###### 互相转换

encode str

#### 7.元组

相当于vector

元素本身里面可以修改，但是元组的元素不可修改

单个元素,无逗号就是字符串

```python
x=('hello'),
>>> x=(2)
>>> tup=(1,2,3)
>>> tup+=x
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: can only concatenate tuple (not "int") to tuple

>>> x=(2),
>>> tup+=x
>>> print(tup)
(1, 2, 3, 2)

>>> x=()#空元组
>>> tup+=x
>>> print(x)
()
>>> print(tup)
(1, 2, 3, 2)

#不会修改在原来的元组上
>>> tup1=tup
>>> tup1+=(2),
>>> print(tup1)
(1, 2, 3, 2, 2)
>>> print(tup)
(1, 2, 3, 2)

```

#### 8.列表

原地添加

=是让列表地址有另一个名字

```python
>>> a=[1,2,3,4]
>>> b=a
>>> print(b is a)
True
>>> b+=[10]
>>> print(b)
[1, 2, 3, 4, 10]
>>> print(a)
[1, 2, 3, 4, 10]
```

列表拷贝

元素是数字，完成深拷贝（两个列表无关）

元素是列表，不是深拷贝（一旦操作了列表元素，两边都会修改）

深拷贝的方法见0318作业c

```python
c=a[:]
```

列表深拷贝

```python
import copy
b=copy.deepcopy(a)
```

#### 9.函数

map 将一个列表（元组）映射到另一个列表（元组）

```python
map(int,input())
```

filter 按照所定义的函数过滤掉列表（元组）中的一些元素

#### 10.字典

键：可哈希（不可变）

对象作为字典的键，实际是地址作为键

可以快速查找

通过dict函数把列表变成字典

d.clear() 清空字典 

d.items()字典元素的集合：每个键值对是元组

d.vlaues() 值

d.copy()  浅拷贝，相关联

Copy.deepcopy(x) 深拷贝

#### 11.集合

set,可修改，无重复元素，元素必须可哈希（不可变），自动去重

```python
set()
#字符串，列表都可以转集合
s.add()#加元素,重复不进行操作
s.remove()#删元素，不存在出错
s.discard()#删元素，不存在不会出错
a&b#求交
a|b#求并
a-b#求差
a>b#子集，真子集
```

