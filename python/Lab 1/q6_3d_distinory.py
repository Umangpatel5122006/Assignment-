import math

def distance_bw(x1, y1, z1, x2, y2, z2):
    return math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)

# Input 10 points
points = []
for i in range(10):
    print(f"Enter coordinates for point {i + 1}")
    x = int(input("Enter x coordinate: "))
    y = int(input("Enter y coordinate: "))
    z = int(input("Enter z coordinate: "))
    points.append((x, y, z))

# Find nearest neighbor for each point
nearest_points = []
for i in range(len(points)):
    min_distance = float('inf')
    current_point = points[i]
    nearest_point = None
    for j in range(len(points)):
        if i == j:
            continue
        other_point = points[j]
        distance = distance_bw(current_point[0], current_point[1], current_point[2], 
                               other_point[0], other_point[1], other_point[2])
        if distance < min_distance:
            min_distance = distance
            nearest_point = other_point
    nearest_points.append((current_point, nearest_point))

# Print the result
print("\nOutput:")
print("Point -> Nearest Point")
for current_point, nearest_point in nearest_points:
    print(f"{current_point} -> {nearest_point}")

            
