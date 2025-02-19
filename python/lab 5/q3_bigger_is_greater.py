def next_permutation(s):
    s = list(s)
    i = len(s) - 2
    while i >= 0 and s[i] >= s[i + 1]:
        i -= 1
    if i == -1:
        return "No Answer"
    j = len(s) - 1
    while s[j] <= s[i]:
        j -= 1
    s[i], s[j] = s[j], s[i]
    s = s[:i + 1] + sorted(s[i + 1:])
    return "".join(s)

t = int(input("Enter value of test cases: "))
f = []
for _ in range(t):
    s = input("Enter word: ")
    f.append(next_permutation(s))

for result in f:
    print(result)