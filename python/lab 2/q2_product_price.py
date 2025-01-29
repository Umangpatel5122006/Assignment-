d={}
flag=0
ptr=0
while flag==0:
    c=int(input(" Press 1.Enter a product 2.Exit "))
    match c:
        case 1:
                product=str(input(" Enter name of product "))
                price=int(input(" Enter price "))
                d[product]=price
        case 2:
              flag=1
              
while ptr==0:
    c=int(input(" Press 1.To enter and get info. of a product 2.Exit "))
    match c:
        case 1:
                product=str(input(" Enter name of product "))
                if product in d:
                      
                      print(" Price of the product is:",d[product])
                else:
                      print(" Product doesn't exist ")  
        case 2:
              ptr=1
              print(" Exiting... ") 
              



