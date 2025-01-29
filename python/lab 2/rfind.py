a=str(input(" Enter string"))
#  012345678 
#  876543210 
sub=str(input(" Enter sub string"))
last=-1
for i in range (len(a)-len(sub)+1):
    sub1=a[i:i+len(sub)]
    if sub==sub1:
        last=i   
if last!=-1:
    print(" value of rindex:",last)
else:
    print(" Error")

