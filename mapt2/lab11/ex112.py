number = 100
while number <= 150:
    if number%5 == 0 and number%7 == 0:
        number += 1
        continue
    print(number)
    number += 1