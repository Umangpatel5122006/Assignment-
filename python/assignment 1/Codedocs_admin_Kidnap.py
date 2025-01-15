# this programe is designed to get position of ball after all swaps

t=int(input("Enter value of test case"))
for i in range(t):
    n=int(input("Enter value of N(greater than 2)"))
    x=int(input("Enter value of X"))
    s=int(input("Enter value of S"))
    if n<3:
        print("Invalid input ")
    else:
        old=x
        for i in range(n):
            b=int(input("Enter value of final swap value"))
            a=int(input("Enter value of start swap value"))
            if old==a:
                pos=b#updateing value of position
                old=b
            else:
                continue
        print("position= ",pos)



