import pandas as pd

n = int(input("Enter size of array\n"))
a = []

for i in range(n):
    k = input("Enter string: ")
    a.append(k)
ans = pd.Series(a)
upper_strings = ans.str.upper()
lower_strings = ans.str.lower()
lenghth = ans.str.len()

print("Uppercase Strings:")
print(upper_strings.to_list())

print("Lowercase Strings:")
print(lower_strings.to_list())

print("Length of  Strings:")
print(lenghth.to_list())