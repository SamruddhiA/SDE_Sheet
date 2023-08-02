// Remove N-th node from the end of a Linked List

// Remove N-th node from the end of a Linked List

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *temp = new ListNode();

        temp->next = head;

        ListNode *slow = temp;

        ListNode *fast = temp;

        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return temp->next;
    }
};