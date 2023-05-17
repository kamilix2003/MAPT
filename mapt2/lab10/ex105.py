n = 5
Dictionary = dict()
for i in range(0,n):
    Dictionary.update({i:i*i})
print(Dictionary)
for i in Dictionary:
    print(type(i))