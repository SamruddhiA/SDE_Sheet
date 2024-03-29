// Merge two sorted Linked Lists

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list.The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == NULL)
        {
            return list2;
        }
        if (list2 == NULL)
        {
            return list1;
        }
        if (list1->val > list2->val)
        {
            swap(list1, list2);
        }

        ListNode *result = list1;

        while (list1 != NULL && list2 != NULL)
        {
            ListNode *temp = NULL;

            while (list1 != NULL && list1->val <= list2->val)
            {
                temp = list1;
                list1 = list1->next;
            }

            temp->next = list2;
            swap(list1, list2);
        }

        return result;
    }
};