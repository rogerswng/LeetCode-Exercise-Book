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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !(head->next))
            return head;
        ListNode *p = head;
        int tem = p->val;
        while(p && p->next)
        {
            if(p->val == p->next->val)
                p->next = p->next->next;
            else
                p = p->next;
        }
        return head;
    }
};
