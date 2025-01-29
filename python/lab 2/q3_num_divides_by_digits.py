t=int(input("Enter total number"))
i=0
q,r=0,0
for i in range(t):
    count=0
    n=int(input("Enter a number"))
    o=n     #store number as it is
    while n>0:
        r=n%10
        if r!=0:
             if o%r==0:
                count=count+1  
        n=n//10
    print(count)    