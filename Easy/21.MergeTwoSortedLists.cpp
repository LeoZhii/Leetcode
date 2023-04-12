// 21. Merge Two Sorted Linked Lists
// April 12, 2023
// Leo Zhi

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // if list1 is empty
        if (list1 == nullptr)
        {
            return list2;
        }

        // if list2 is empty
        if (list2 == nullptr)
        {
            return list1;
        }

        // initialize head of final linked list
        ListNode *head = new ListNode();

        // if list1 is smaller value
        if (list1->val <= list2->val)
        {
            head->val = list1->val;
            list1 = list1->next;
        }
        // if list2 is smaller value
        else if (list1->val > list2->val)
        {
            head->val = list2->val;
            list2 = list2->next;
        }

        // create copy of head pointer that will update each iteration
        ListNode *temp = head;

        while (list1 != nullptr && list2 != nullptr)
        {
            // update temp
            temp->next = new ListNode;
            temp = temp->next;

            // if list1 is smaller value
            if (list1->val <= list2->val)
            {
                temp->val = list1->val;
                list1 = list1->next;
            }
            // if list2 is smaller value
            else if (list1->val > list2->val)
            {
                temp->val = list2->val;
                list2 = list2->next;
            }
        }
        // if one list ends early
        if (list1 == nullptr && list2 != nullptr)
        {
            temp->next = list2;
        }
        else if (list1 != nullptr && list2 == nullptr)
        {
            temp->next = list1;
        }

        return head;
    }
};
