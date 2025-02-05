t=int(input("Enter number of test cases"))
for t in range (t):
    n=int(input("Enter number of cycles"))
    h=1
    for i in range (1,n+1):
        if i%2==0 :
            h=h+1
        else :
            h=h*2
    print("Height is: ",h)

