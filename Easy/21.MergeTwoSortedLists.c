// 21. Merge Two Sorted Lists
// Leo Zhi
// Dec 11, 2022
// does not work with linked lists
// April 12, 2023
// works with both c and c++!!

#include <stdio.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    else if (list2 == NULL)
    {
        return list1;
    }

    // allocate memory to head pointer
    struct ListNode *head = malloc(sizeof(struct ListNode));

    // create copy of head pointer that will iterate through the lists
    struct ListNode *temp = head;

    // compare first elements for initializing head
    if (list1->val <= list2->val)
    { // if first value is less than second
        temp->val = list1->val;
        list1 = list1->next;
    }
    else
    { // if second value is less than first
        temp->val = list2->val;
        list2 = list2->next;
    }

    // iterate through the rest of the list
    while (list1 != NULL && list2 != NULL)
    {
        // allocate memory
        temp->next = malloc(sizeof(struct ListNode));
        // increment temp
        temp = temp->next;

        // compare two pointer values
        if (list1->val <= list2->val)
        { // if first value is less than second
            temp->val = list1->val;
            list1 = list1->next;
        }
        else
        { // if second value is less than first
            temp->val = list2->val;
            list2 = list2->next;
        }
    }

    // if one list ends before the other, append the rest of the other list
    if (list1 == NULL)
    {
        temp->next = list2;
    }
    else
    {
        temp->next = list1;
    }

    return head;
}