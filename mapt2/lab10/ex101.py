Colors = ['red', 'green', 'blue', 'black', 'white']
# 1.
print(Colors[0])
# 2.
Different_type = False
Previous_type = type(Colors[0])
for Color in Colors:
    if Previous_type != type(Color):
        Different_type = True
    Previous_type = type(Color)
str = 'different' if Different_type else 'same'
print(f'List Colors contains {str} types of variables')
# 3.
print(len(Colors))
# 4.
Random_color = 'pink'
print(f'Color {Random_color} is in the list: {Random_color in Colors}')
# 5.
Zeros = [0] * 100
print(Zeros)
# 6.
Numbers = []
for Number in range(0, len(Colors),1): Numbers.append(Number)
Numbers_and_Colors = Colors + Numbers
print(Numbers_and_Colors)
# 7.
Earth = 'earth'
Week_days = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
Modified_list = Numbers_and_Colors
Modified_list[0] = Earth
Modified_list.append(Week_days)
print(Modified_list)
# 8.
Modified_list.append('mercury')