s=str(input(" Enter string"))
# print(s.split(',',3))
# print(s.rsplit(',',3))
s1=""
count=0
q=(input(" Enter symbol by which you want to split"))
maxsplit=int(input(" Enter number for how many times you want to split"))
for i,char in enumerate(s):
    if char!=q:
        if count<maxsplit:
            s1+=char
        else:
            s1=s1+q+char
    else:
        count=count+1  
print(" string after using split function")    
print(s1)
s2=""
count2=0
q2=(input(" Enter symbol by which you want to split"))
maxsplit2=int(input(" Enter number for how many times you want to split"))
for i in range (len(s)-1,-1,-1):
    char=s[i]
    if char!=q2:
        if count2<maxsplit2:
            s2+=char
        else:
            s2=s2+q+char
    else:
        count2=count2+1 
s3=s2[::-1]  
print("  after using rsplit function")   
print(s3)


    
