def factorial(number):
    if number == 1 or number == 0:
        return 1
    else:
        return number * factorial(number-1)
    
# number = int(input())
number = 8
print(factorial(number))