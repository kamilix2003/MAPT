txt = open('text_file.txt')
volwels = ['a', 'e', 'i', 'o', 'u', 'y']
lines = 0
words_per_line = []
volwels_count = 0
lines_to_print = []
for line in txt:
    # print(line)
    print_line = False
    words = line.split(' ')
    words_per_line.append(len(words))
    for word in words:
        for char in word:
            if char.lower() in volwels:
                volwels_count += 1
                if char == char.upper(): print_line = True
    if print_line: lines_to_print.append(line)
    lines = len(words_per_line)
print(f'line count: {lines}')
print(f'words in each line: ')
print(words_per_line)
print(f'volwels in whole text: {volwels_count}')
print(f'lines with upper case volwel {lines_to_print}')

    