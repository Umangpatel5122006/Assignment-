def fibo(n:int)->int:
    z1,z2,z3=0,1,0
    while(z2<n):
        z3=z2+z1
        z1=z2
        z2=z3
    if(z2==n):
        return 1
    else:
        return 0
i,flag,n,q,temp=0,0,0,0,0
a=[]
t=int(input("How many termsyou want to check "))
for i in range(t):
    temp=int(input("Enter a number"))
    if fibo(temp):
        a.append("IsFibo")
    else:
        a.append("IsNotFibo")

print(a)