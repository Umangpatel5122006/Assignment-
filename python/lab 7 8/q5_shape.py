class Shape:
    def __init__(self,name):
        self.name=name
    def area(self):
        if self.name=="Rectangle":
            return self.length*self.width
        elif self.name=="Circle":
            return 3.14*self.radius**2
    def perimeter(self):
        if self.name=="Rectangle":
            return 2*(self.length+self.width)
        elif self.name=="Circle":
            return 2*3.14*self.radius
sh1=(input("Enter shape: "))
sh=sh1.lower()
if sh=="rectangle":
    Shape1=Shape("Rectangle")
    Shape1.length=float(input("Enter length: "))
    Shape1.width=float(input("Enter width: "))
    print("Area of rectangle is: ",Shape1.area())
    print("Perimeter of rectangle is: ",Shape1.perimeter())
elif sh=="circle":
    Shape1=Shape("Circle")
    Shape1.radius=float(input("Enter radius: "))
    print("Area of circle is: ",Shape1.area())
    print("Perimeter of circle is: ",Shape1.perimeter())
    