# 2409. Count Days Spent Together
# Leo Zhi
# Dec 7, 2022
# find the numbers of days that alice and bob spend in the same city

arriveAlice = "07-31"
leaveAlice = "11-08"
arriveBob = "05-02"
leaveBob = "08-07"

# initialize dictionary
daysPerMonth = {1: 31, 2: 28, 3: 31, 4: 30, 5: 31, 6: 30,
                7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 31}

# find first day that both people are together
if int(arriveAlice[0:2]) > int(arriveBob[0:2]):
    firstDate = arriveAlice
elif int(arriveAlice[0:2]) < int(arriveBob[0:2]):
    firstDate = arriveBob
else:
    if int(arriveAlice[3:5]) > int(arriveBob[3:5]):
        firstDate = arriveAlice
    else:
        firstDate = arriveBob

# find last day that both people are together
if int(leaveAlice[0:2]) > int(leaveBob[0:2]):
    lastDate = leaveBob
elif int(leaveAlice[0:2]) < int(leaveBob[0:2]):
    lastDate = leaveAlice
else:
    if int(leaveAlice[3:5]) > int(leaveBob[3:5]):
        lastDate = leaveBob
    else:
        lastDate = leaveAlice

# Set Variables
totalDays = 1
firstDay = int(firstDate[3:5])
firstMonth = int(firstDate[0:2])
lastDay = int(lastDate[3:5])
lastMonth = int(lastDate[0:2])

while firstMonth != lastMonth or firstDay != lastDay:
    if firstDay == daysPerMonth[firstMonth]:
        firstMonth += 1
        firstDay = 0
        if firstMonth == 13:
            print(0)
    totalDays += 1
    firstDay += 1

print(totalDays)
