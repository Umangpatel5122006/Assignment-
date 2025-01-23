#This programe is designed to display name of all student with reverse manner with max charecter in each is 15
name=[]
i=0
temp=""
n=int(input("Enter no. of total student"))
for i in range(n):
   temp=str(input("enter student name "))
   temp =temp[0:16]#for slicing
   temp=temp[::-1]
   name.append(temp)  
print(name)



