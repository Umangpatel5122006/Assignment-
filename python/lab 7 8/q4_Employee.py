class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
    def combined(self,e1,e2):
        self.e1=e1
        self.e2=e2
        return self.e1+self.e2
    def compare(self,e1,e2):
        self.e1=e1
        self.e2=e2
        if self.e1>self.e2:
            print("Employee 1 has higher salary")
            print("Difference in salary is: ",self.e1-self.e2)
            
        else:
            print("Employee 2 has higher salary")
            print("Difference in salary is: ",self.e2-self.e1)
e1=input("Enter name of employee 1: ")
s1=float(input("Enter salary of employee 1: "))
e2=input("Enter name of employee 2: ")
s2=float(input("Enter salary of employee 2: "))
emp1=Employee(e1,s1)
emp2=Employee(e2,s2)
print("Combined salary of both employees is: ",emp1.combined(s1,s2))
emp1.compare(s1,s2)

