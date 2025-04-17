import numpy as np
import matplotlib.pyplot as plt

def f(x):
    
    return x**7 - 6*x**2 + 4*x + 12  

def bisection_with_plot(func, max_attempts=100, tolerance=1e-6):

    found_interval = False
    a, b = None, None
    attempts = 0

    while not found_interval and attempts < max_attempts:
        
        a = np.random.uniform(-10, 10)
        b = np.random.uniform(-10, 10)
        if func(a) * func(b) < 0:  
            found_interval = True
        attempts += 1

    if not found_interval:
        print("Failed to find a valid initial interval.")
        return None, None

   
    updates = []  # Store midpoint values
    while abs(b - a) > tolerance:
        c = (a + b) / 2  
        updates.append(c)  # Store update
        if func(c) == 0:  # Exact root 
            break
        elif func(c) * func(a) < 0:  # Root in [a, c]
            b = c
        else:  # Root in [c, b]
            a = c

    return a, b, np.array(updates)


a, b, updates = bisection_with_plot(f)

if updates is not None:
    print(f"Approximate root: {(a + b) / 2}")

    x_vals = np.linspace(-10, 10, 1000)
    y_vals = f(x_vals)
    plt.plot(x_vals, y_vals, label="f(x)")

    plt.scatter(updates, f(updates), color="red", label="Midpoint updates")
    plt.axhline(0, color="black", linestyle="--", linewidth=0.5)
    plt.xlabel("x")
    plt.ylabel("f(x)")
    plt.title("Bisection Method - Root Finding Process")
    plt.legend()
    plt.grid()
    plt.show()
