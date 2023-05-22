def is_prime(number):
    if number == 2: return True
    for i in range(2, number-1):
        if number%i == 0: return False
    return True

for number in range(2,10,1):
    if is_prime(number): print(number)
else:
    print('all primes in range <2,10>')

given_number = 9
for number in range(2,10,1):
    if is_prime(number) and given_number%number == 0: 
        print(number)
        break
else:
    print(f'first given divisor other than 1 for {given_number} in range <2,10>')
    