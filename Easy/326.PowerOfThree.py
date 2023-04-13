# 326. Power of Three
# Leo Zhi
# Dec 11, 2022

def powerOfThree(n):
    if n < 1:
        return False
    elif n == 1:
        return True
    else:
        return powerOfThree(n/3)

print(powerOfThree(81))
