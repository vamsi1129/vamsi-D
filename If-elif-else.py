'''If-elif-else statements'''
'''Program to find biggest of three numbers'''
a=int(input("Enter a number:"))
b=int(input("Enter b number:"))
c=int(input("Enter c number:"))
if(a>b and a>c):
    print(a ,"is bigger")
elif(b>a and b>c):
    print(b," is bigger")
else:
    print(c,"is bigger")
