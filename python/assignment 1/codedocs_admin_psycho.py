# this programe is designed to count min number of swaps

n=int(input("Enter value of N(no. of members"))
count = 0

num= list(map(int,input("Enter integers separated by spaces").split()))
for i in range(0,n):
    if i+1 != num[i]:
        count=count+1
        num[i] , num[n-1-i] = num[n-1-i] , num[i]
print(count)       


    


