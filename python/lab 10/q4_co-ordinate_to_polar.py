import numpy as np
import random
table = np.random.rand(10,2)*10
r=np.sqrt(table[:,0]**2+table[:,1]**2)
arg = np.arctan(table[:,1],table[:,0])
print("Cartisian co-ordinate(x,y):\n")
for i in range (len(table)):
    print(f"Point {i+1}:(x,y)  =  ({table[i][0]:.2f},{table[i][1]:.2f})  =>  (r,theta)  =  ({r[i]:.2f},{arg[i]:.2f})")