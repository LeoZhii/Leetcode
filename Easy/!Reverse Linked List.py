# 206. Reverse Linked List
# Leo Zhi
# Dec 11, 2022
# Does not work with linked lists

head = [1,2,3,4,5]

def reversed(head,new):
    new.append(head[-1])
    return reversed(head[:-1],new)

print(reversed(head,[]))
