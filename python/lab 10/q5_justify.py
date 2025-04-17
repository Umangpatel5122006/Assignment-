import numpy as np

def lmodi(word):
    return word.ljust(15, '_')

def rmodi(word):
    return word.rjust(15, '_')

def cmodi(word):
    return word.center(15, '_')

n = int(input("Enter size of array: "))
a=[]
for j in range(n):
    a.append(input(f"Enter element {j + 1}: "))

print("Original list:", a)

arr = np.array(a, dtype=str)

arr_l = np.array([lmodi(w) for w in arr])
arr_r = np.array([rmodi(w) for w in arr])
arr_c = np.array([cmodi(w) for w in arr])

print("Left string Array:\n", arr_l)
print("Right string Array:\n", arr_r)
print("Center string Array:\n", arr_c)
