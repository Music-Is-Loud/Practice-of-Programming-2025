def good(func):
    def wrapper(*args):#*args表示多个参数元组
        print("%s called"%func.__name__)
        return func(*args)+5
    return wrapper
@good
def mysum(a,b,c):
    return a+b+c
print(mysum(1,2,3))