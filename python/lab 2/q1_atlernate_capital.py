s1=str(input(" Enter a word"))
result=""
for i,char in enumerate(s1):
    if i%2==1:
        result+=char.upper()
    else:
        result+=char.lower()
print(result)