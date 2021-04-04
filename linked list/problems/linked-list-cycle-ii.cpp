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
    ListNode *detectCycle(ListNode *head) {
        int counter=0;
        if(head==NULL)
            return NULL;
        ListNode *slow=head,*fast=head;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
                {counter=1;break;}
        }
        if(counter)
        {
            slow=head;
            
            while(slow!=fast)
                slow=slow->next,fast=fast->next;
            
            return slow;
        }
        else
            return NULL;
    }
};
