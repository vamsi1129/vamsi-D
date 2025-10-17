'''List Data Structure'''
'''list=eval(input("Enter list : "))
print(list)
print(type(list))'''
'''---------------------------------------------------------------'''
'''Creation of list with list function'''
'''x=list(range(0,10,1))
print(x)
print(type(x))'''
'''------------------------------------------------------------------'''
'''Creation of list with split function'''
'''s="Learning Python is very easy !!!"
x=s.split()
print(x)
print(type(x))'''
'---------------------------------------------------------------------'
'''n=[10,20,49,30,57]
print(n)
n[1]=1000
print(n)
-----------------------------------------------------------------------'''
'''By slice 
list=eval(input("Enter the List elements : "))
print(list)
print(list[2:7:2])
print(list[2:7:1])
print(list[2:5:])'''
'''-----------------------------------------------------------------------'''
'''n=[1,2,3,4,5,6,7,8,7,9,8,6,6,6,7]
i=0
while i<len(n):
    print(i)
    i=i+1
for j in range(len(n)):
    print(j)
print(n.count(2)) #count of no of times a element occur
print(n.count(7))
print(n.count(0))
print(len(n)) #To know the length
-------------------------------------------------------------------------'''
'''Index function
n=[1,2,3,3,2,2,2,2]
if(1 in n):
    print(n.index(1))
else:
    print("1 is not present in the list")
if(2 in n):
    print(n.index(2))
else:
    print("2 is not present in the list")
if(3 in n):
    print(n.index(3))
else:
    print("3 is not present in the list")
if(4 in n):
        print(n.index(1))
else:
    print("4 is not present in the list")
------------------------------------------------------------------------------'''
'''Append Function'''
list=[]
list.append('A')
list.append('B')
list.append('C')
print(list)

