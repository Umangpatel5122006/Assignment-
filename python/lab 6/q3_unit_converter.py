      
class Converter:
    def __init__(self, length, unit):
        self.length = length
        self.unit = unit.lower()
        self.conversion_factors = {
            'inches': 1,
            'feet': 12,
            'yards': 36,
            'miles': 63360,
            'kilometers': 39370.1,
            'meters': 39.3701,
            'centimeters': 0.393701,
            'millimeters': 0.0393701,
        }
    
    def convert_to_inches(self):
        if self.unit in self.conversion_factors:
            return self.length * self.conversion_factors[self.unit]
        else:
            raise ValueError("Invalid unit")

    def inches(self):
        return self.convert_to_inches()
    
    def feet(self):
        return (self.convert_to_inches() / 12)
    
    def yards(self):
        return (self.convert_to_inches() / 36)
    
    def miles(self):
        return (self.convert_to_inches() / 63360)
    
    def kilometers(self):
        return (self.convert_to_inches() / 39370.1)
    
    def meters(self):
        return (self.convert_to_inches() / 39.3701)
    
    def centimeters(self):
        return (self.convert_to_inches() / 0.393701)
    
    def millimeters(self):
        return (self.convert_to_inches() / 0.0393701)

l=int(input("Enter the length: "))
u=input("Enter the unit: ")
c=Converter(l,u)
print(f"{c.length} inches in feet: {c.feet()}")
print(f"{c.length} inches in meters: {c.meters()}")
