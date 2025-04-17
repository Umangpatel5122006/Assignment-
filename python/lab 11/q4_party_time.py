import pandas as pd
# 1 indicates visits, 0 indicates he doesn't
data = {
    "John": [1, 0, 1, 1, 0, 0, 1, 0, 1, 1],  
    "Judy": [1, 1, 0, 1, 0, 1, 1, 0, 1, 1]   
}
schedule = pd.DataFrame(data)

schedule["party"] = (schedule["John"] & schedule["Judy"]).astype(int)

days_til_party = []
for i in range(len(schedule)):
    if schedule["party"].iloc[i] == 1:
        days_til_party.append(0)
    else:
       
        next_party = schedule["party"].iloc[i:].idxmax()
        days_til_party.append(next_party - i if schedule["party"].iloc[next_party] == 1 else len(schedule) - i)


schedule["days for next party"] = days_til_party


print(schedule)