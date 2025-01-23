#This programe is designed to check set if it is equvivalance or not 
s6=set()
s1=set()
s2=set()
s3=set()
s4=set()
s5=set()
i=0
for i in range(10000):
    s6.add(i)
for i in range(10000):
    if i % 5 == 0:
        s1.add(i)
    elif i % 5 == 1:
        s2.add(i)
    elif i % 5 == 2:
        s3.add(i)
    elif i % 5 == 3:
        s4.add(i)
    elif i % 5 == 4:
        s5.add(i)
s1.update(s2)
s1.update(s3)
s1.update(s4) 
s1.update(s5)  
if s6==s1:
    print("Both set are equvivalance")
else:
    print("Both set are not equvivalance")