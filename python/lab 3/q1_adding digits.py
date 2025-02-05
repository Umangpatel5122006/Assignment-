
def digitsum(n:int)->int:
    sum=0
    dsum=0
    while(n>0):
        q=n%10
        sum=sum+q
        n=n//10
    while(sum>0):
        a=sum%10
        dsum=dsum+a
        sum=sum//10
    return (dsum)

n=int(input("Enter a number: "))

print(digitsum(n))




    