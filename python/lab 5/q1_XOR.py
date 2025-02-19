a=int(input("Enter lower limit"))
b=int(input("Enter upper limit"))
nmax=0
for i in range(a,b+1):
    for j in range(i,b+1):
        current=i^j
        nmax=max(nmax,current)
print(nmax)