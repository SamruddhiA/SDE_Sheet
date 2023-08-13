// Add two numbers represented as Linked Lists

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *result = new ListNode(0);
        ListNode *ptr = result;

        int carry = 0;

        while (l1 != NULL || l2 != NULL)
        {
            int sum = carry;

            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            sum = sum % 10;

            ptr->next = new ListNode(sum);

            ptr = ptr->next;
        }

        if (carry == 1)
            ptr->next = new ListNode(1);

        return result->next;
    }
};