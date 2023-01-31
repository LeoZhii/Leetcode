# Roman to Integer
# Leo Zhi
# November 14, 2022

# Python dictionaries
valuedict = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
combodict = {'IV': 4, 'IX': 9, 'XC': 90, 'XL': 40, 'CD': 400, 'CM': 900}

roman = input('What is your roman numeral?\n')

integer = 0

for combo in combodict:
    if combo in roman:
        integer += combodict[combo]
        roman = roman.replace(combo, '')

for i in range(len(roman)):
    if roman[i] in valuedict:
        integer += valuedict[roman[i]]

print(integer)