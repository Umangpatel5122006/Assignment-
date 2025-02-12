t=int(input("Enter total number of test case"))
p=list()
for i in range(t):
    w=input("enter a word")
    a=list(w)
    start=0
    count=0
    end=len(w)-1
    while(start<=end):
        if(ord(w[start])>ord(w[end])):
            q=ord(w[start])
            d=ord(w[end])
            while(q!=d):
                q=q-1
                count=count+1
            a[start] = chr(d)
        elif (ord(w[start])<ord(w[end])):
            q=ord(w[end])
            d=ord(w[start])
            while(q!=d):
                q=q-1
                count=count+1
            a[end] = chr(d)
        start=start+1
        end=end-1 
    p.append(count)       
    
print(p)    
