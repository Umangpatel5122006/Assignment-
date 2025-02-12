# Function to check if a number is a perfect square
def issqrt(n: int) -> bool:
    for i in range(1, n + 1):
        if i * i == n:
            return True
        elif i * i > n:
            break
    return False

# Initialize variables
t = int(input("Enter number of test cases: "))
results = []

for _ in range(t):
    count = 0
    a = int(input("Enter value of lower limit: "))
    b = int(input("Enter value of upper limit: "))
    
    # Iterate through the range and count perfect squares
    for j in range(a, b + 1):
        if issqrt(j):
            count += 1
    results.append(count)

print(results)

