# filePath = input('Input file path: ')
filePaths = ['File.txt', 'DivideByZero.txt', 'DoesNotExist.txt']

def Do_something(filePath):
    print(f'\nOpenning {filePath}')
    try:
        File = open(filePath)
        nominator = int(File.readline())
        denominator = int(File.readline())
        result = nominator/denominator
        print(f'{nominator} * {denominator} = {result}')
    except FileNotFoundError:
        print('file does not exist')
    except ZeroDivisionError:
        print('Division by zero')
        
for filePath in filePaths:
    Do_something(filePath)