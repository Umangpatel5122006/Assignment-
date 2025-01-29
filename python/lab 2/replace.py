s=str(input(" Enter string "))
# print(s.replace(old sub string,new sub string,frequency))
old=str(input(" Enter old sub string "))
new=str(input(" Enter new sub string "))
fre=int(input(" Enter value of frequency  "))
result=""
i,j=0,0

while(i<len(s)):
    sub1=s[i:i+len(old)]
    if sub1==old :
        if j<fre:
            result+=new
            i+=len(old)
            j=j+1
        else:
            result+=old
            i+=len(old)
    else:
        result+=s[i]
        i=i+1
print(result)

