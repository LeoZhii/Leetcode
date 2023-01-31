# Two Sum
# Leo Zhi
# Nov 18, 2022
# Impossible to find index of list that has been altered

nums = [3,2,4]
target = 6
ogNums = nums

# Low Efficiency
# def lowEfficiency():
#     global nums, target
#     for i in range(len(nums)):
#         for n in range(len(nums)):
#             if i == n:
#                 pass
#             elif (nums[i] + nums[n]) == target:
#                 return [i, n]

# sort list (selection sort)
for i in range(len(nums)):
    # find the min in nums
    min = i
    for j in range(i + 1, len(nums)):
        if nums[j] < nums[min]:
            min = j
    # swap the first index with min index
    if min != i:
        x = nums[i]
        nums[i] = nums[min]
        nums[min] = x

# go through num in nums
# use boolean search for a number that will add up to target sum
# if no number exists, call on next num

for num in nums:
    low = 0
    high = len(nums)-1
    found = False

    while not found:
        mid = low+high//2
        if nums[mid] == target:
            found = True
            break
        elif nums


print([ogNums.index(num1),ogNums.index(num2)])