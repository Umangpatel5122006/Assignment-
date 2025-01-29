a=str(input(" Enter string"))
sub=str(input(" Enter sub string"))
  
for i in range (len(a)-len(sub)+1):
    sub1=a[i:i+len(sub)]
    if sub==sub1:
        print(" value of index:",i)
        break
        
last=-1
for i in range (len(a)-len(sub)+1):
    sub1=a[i:i+len(sub)]
    if sub==sub1:
        last=i   
print(" value of rindex:",last)