a=str(input(" Enter string "))
sub=str(input(" Enter sub string "))
count=0
for i in range (len(a)-len(sub)+1):
    sub1=a[i:i+len(sub)]
    if sub==sub1:
        count+=1
print(count)