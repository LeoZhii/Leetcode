# 231. Power of Two
# Leo Zhi
# Dec 11, 2022

def isPowerOfTwo(n):
    if n == 2 or n == 1:
        return True
    elif n < 2:
        return False
    else:
        return isPowerOfTwo(n/2)

print(isPowerOfTwo(1))