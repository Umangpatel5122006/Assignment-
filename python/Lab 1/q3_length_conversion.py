h=int(input("Enter your height in feet"))
c=int(input("Enter 1 for inches,2 for yards,3 for miles,4 for milimeters,5 for centimeters,6 for meters,7 for kilo meters"))
a=[]
a=[12*h,0.3333*h,0.000189*h,304.8*h,30.48*h,0.0003048*h]
print(" Ans:",a[(c-1)] )