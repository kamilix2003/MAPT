def convert_temperature(degrees, unit):
    degrees = int(degrees)
    if unit == 'F':
        temperature = (degrees -32) * 5/9
        converted_unit = 'C'
    else:
        temperature = 9/5 * degrees + 32
        converted_unit = 'F'
    print(str(degrees)+unit, '=', str(int(round(temperature,0)))+converted_unit)
    return (temperature, converted_unit)

def split_temperature(temperature):
    if temperature[-1] != 'C' and temperature[-1] != 'F':
        print('Wrong unit')
        return 0
    unit = temperature[-1]
    degrees = temperature[:-1]
    return (degrees, unit)
    

test_temperature1 = '21C'
test_temperature2 = '70F'
test_temperature3 = '2137F'

(degrees1, unit1) = split_temperature(test_temperature1)
(degrees2, unit2) = split_temperature(test_temperature2)
(degrees3, unit3) = split_temperature(test_temperature3)

convert_temperature(degrees1, unit1)
convert_temperature(degrees2, unit2)
convert_temperature(degrees3, unit3)