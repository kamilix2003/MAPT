# word = input()
word = 'Hello world'
reversed_word = ''
# for letter in word:
#     reversed_word = letter + reversed_word
for letter in range(0,len(word)):
    reversed_word = word[letter] + reversed_word
print(reversed_word)