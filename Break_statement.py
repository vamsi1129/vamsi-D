'''Break statement'''
'''x=int(input("Enter a number : "))
for i in range (x):
    if(i==7):
        print("Process is enough..Plz break")
        break
print (i)'''
'''----------------------------------------------------------------------------'''
'''cart=[100,300,400,1000,789,10000]
for item in cart:
    if item>1000:
        print("To place this order insurence must be required")
        break
    print(item)'''
'''----------------------------------------------------------------------------------'''
x=int(input("Enter no.of subjects : "))
for i in range(x):
    a=int(input("Enter marks:"))
for j in range(a):
    if(a<40):
        print("The student is fail")
        break
print("The student is pass")

        
