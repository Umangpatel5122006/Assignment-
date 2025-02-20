import math

class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def mag(self):
        return math.sqrt(self.x**2 + self.y**2)
    
    def angle(self):
        return math.degrees(math.atan2(self.y, self.x))
    
    def diff(self, other):
        return math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2)
    
    def dotp(self, other):
        return self.x * other.x + self.y * other.y
    
    def crossp(self, other):
        return self.x * other.y - self.y * other.x

class Vector3D(Vector2D):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def mag(self):
        return math.sqrt(self.x**2 + self.y**2 + self.z**2)
    
    def diff(self, other):
        return math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2 + (self.z - other.z)**2)
    
    def dotp(self, other):
        return self.x * other.x + self.y * other.y + self.z * other.z
    
    def crossp(self, other):
        return Vector3D(self.y * other.z - self.z * other.y,self.z * other.x - self.x * other.z,self.x * other.y - self.y * other.x)

x1 = int(input("Enter value of x for vector1: "))
y1 = int(input("Enter value of y for vector1: "))
z1 = int(input("Enter value of z for vector1: "))
v1 = Vector3D(x1, y1, z1)

x2 = int(input("Enter value of x for vector2: "))
y2 = int(input("Enter value of y for vector2: "))
z2 = int(input("Enter value of z for vector2: "))
v2 = Vector3D(x2, y2, z2)

print("Magnitude of vector1:", v1.mag())
print("Angle of vector1 with respect to X-axis:", v1.angle())
print("Distance between two vectors:", v1.diff(v2))
print("Dot product of two vectors:", v1.dotp(v2))
print("Cross product of two vectors:", v1.crossp(v2).x, v1.crossp(v2).y, v1.crossp(v2).z)
