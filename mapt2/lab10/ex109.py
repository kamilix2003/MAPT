# winter - 
def current_season(day, month):
    if day > 31 or day < 1 or month > 12 or month < 1:
        print('you did something wrong')
        return 0
    if month == 3:
        if  day > 19: return 'spring'
        else: return 'winter'
    if month == 6:
        if day > 20: return 'summer'
        else: return 'spring'
    if month == 9:
        if day > 22: return 'autumn'
        else: return 'summer'
    if month == 12:
        if day > 21: return 'winter'
        else: return 'autumn'
        
test_days = [19, 20, 21, 22, 23]
test_months = [3, 6, 9, 12]
for month in test_months:
    for day in test_days:
        print(str(day)+'.'+str(month),current_season(day, month))
