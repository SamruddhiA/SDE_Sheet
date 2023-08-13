// Delete given node in a Linked List

// here is a singly-linked list head and we want to delete a node node in it.

// You are given the node to be deleted node.You will not be given access to the first node of head.

// All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete (temp);
    }
};