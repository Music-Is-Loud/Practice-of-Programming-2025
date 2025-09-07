class myClass:
    class_attr=10
    @classmethod#装饰器，提示接下来的是类方法
    def func(cls,x):#cls是一个约定的命名，指向类本身，允许在方法中操作类的属性/调用其他类方法
        print(cls.class_attr)
        print(x)
myClass.func(5)
obj=myClass()
obj.func(7)