def is_leap(year):
    return (year%4==0 and (year%100!=0 or year % 400==0))

days_month=[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
days_week=1 

for year in range(1900,1901):
    for month in range(12):
        days_week=(days_week+days_month[month])%7
        if month==1 and is_leap(year):
            days_week=(days_week+1)%7

sundays_on_first=0

for year in range(1901,2001):
    for month in range(12):
        if days_week==0:
            sundays_on_first+=1 
        days_week=(days_week+days_month[month])%7
        if month==1 and is_leap(year):
            days_week=(days_week+1)%7
print(sundays_on_first)
