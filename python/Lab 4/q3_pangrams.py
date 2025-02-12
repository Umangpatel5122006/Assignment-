i,sum=0,0

# print(sum)=2847
s2=set()
s1=input("Enter a string")
s=s1.lower()
l=len(s)
for i in range(97,123):
    s2.add(chr(i))

if(set(s2).issubset(set(s))):
    print("pangram")
else:
    print("not pangram")