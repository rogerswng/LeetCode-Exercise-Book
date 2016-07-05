/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // Needing consider whether the head node is in the linked list.
        if(!head || !(head->next) || !(head->next->next))
            return head;
        ListNode *p = head, *pre, *temp, *pSec = head->next;
        int cnt = 1;
        while(p->next != NULL)
        {
            temp = p->next; pre = p;
            p->next = temp->next;
            p = temp;
            cnt++;
        }
        if(cnt%2)
            p->next = pSec;
        else
            pre->next = pSec;
        return head;
    }
};
