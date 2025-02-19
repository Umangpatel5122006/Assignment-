t=int(input("Enter value of test cases"))
f=list()
for i in range(t):
    k=int(input("Enter value of cuts"))
    if(k%2==0):
        s=k/2
        f.append(int(s*s))
    else:
        s=k//2
        q=k-s
        f.append(int(s*q))
print(f)