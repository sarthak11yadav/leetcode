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
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        ListNode* cur=head->next,*prev=head,*nex=NULL;
        
    
        if(cur==NULL)
            return prev;
        nex=cur->next;
        
        cur->next=prev;
        
    
        ListNode* rest_head=swapPairs(nex);
        prev->next=rest_head;
            
        
    
        
        return cur;
            
        
        
    }
};
