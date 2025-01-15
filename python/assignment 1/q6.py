# this programe is designed to reverse a number

number=int(input("Enter value of a number "))	
c=0
while number>0 :
    rem=int(number)%10
    c=(c * 10)+rem
    number=int(number/10)
print("Reverse of a number is",c)   
