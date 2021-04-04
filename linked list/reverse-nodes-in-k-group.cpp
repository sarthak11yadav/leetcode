/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int n=0;
    void calc(ListNode* head)
    {
        ListNode* q=head;
        while(q)
            n++,q=q->next;
    }
    
    ListNode* reverseit(ListNode* head, int k) {
        
        ListNode* cur=head,*prev=NULL,*nex=NULL;
        int count=0;
        while(cur!=NULL and count<k)
        {
            if(n/k<=0)return cur;

            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            count++;
        }
        n-=k;
        
        if(nex!=NULL)
        {
            ListNode* rest_head=reverseit(nex,k);
            head->next=rest_head;
        }
        
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        calc(head);
        return reverseit(head,k);
        
    }
};
