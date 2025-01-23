#This programe is designed to generate random number and calculating max frequency of zero in continues order
import random
a=[]
for i in range(100):
    a.append(random.randint(0,1))
print(a)
fre=0
maxfre=0
for i in range(100):
    if a[i]==0:
        fre+=1
    if a[i]==1:
        maxfre=max(fre,maxfre)
        fre=0
print(maxfre,"is maximum frequency of zero")
