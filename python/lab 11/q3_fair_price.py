import pandas as pd
n= int(input("Enter total no. of asking prices\n"))
asking_prices = []  
fair_prices = [] 
for i in range(n):
    k = input("Enter asking price: ")
    asking_prices.append(k)
    u = input("Enter fair price: ")
    fair_prices.append(u)

asking_prices = pd.Series(asking_prices)
fair_prices = pd.Series(fair_prices)
good_deals = asking_prices[asking_prices < fair_prices].index.tolist()

print("Indices of good deals:", good_deals)