import pandas as pd
date='2012-01-15'
dobj=pd.to_datetime(date)
print("date object created:")
print( dobj)
dt='2012-01-15 9:20:00 pm'
print("Particular date and time:")
dtobj=pd.to_datetime(dt)
print(dtobj)
lt=pd.Timestamp.now()
print("Local date & time:")
print(lt)
print("Date without time:")
dateWithoutTime=lt.date()
print(dateWithoutTime)
print("Current date:")
localTime=lt.time()
print("Local time:")
print(localTime)
t=pd.to_datetime(dt)
print("Time from a date time.")
print(t.time())