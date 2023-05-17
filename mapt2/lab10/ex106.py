Numbers = []
for Number in range(2000,3200):
    if Number%7==0 and Number%5!=0:
        Numbers.append(Number)
print(Numbers)