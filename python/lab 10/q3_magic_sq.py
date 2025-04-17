import numpy as np

def generate_magic_square(n):

    if n < 3 or n % 2 == 0:
        raise ValueError("Magic square is only possible for odd integers greater than or equal to 3.")
    
    magic_square = np.zeros((n, n), dtype=int)

    i, j = 0, n // 2 
    for num in range(1, n * n + 1):
        magic_square[i, j] = num
        new_i, new_j = (i - 1) % n, (j + 1) % n
        
        if magic_square[new_i, new_j] != 0:  # If the cell is already filled
            i += 1
        else:
            i, j = new_i, new_j

    return magic_square


n = int(input("Enter an odd integer greater than or equal to 3: "))  
magic_square = generate_magic_square(n)
print("Magic Square:")
print(magic_square)