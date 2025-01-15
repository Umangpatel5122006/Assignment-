# this programe is designed to get factorial of given number

n=int(input("Enter value of a number "))
i=1
fac=1
for i in range (1,n):
    fac=fac*i
fac=fac*n
print("factorial is ",fac)