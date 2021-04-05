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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        ListNode* odd_head=head,* even_head=head->next,*x=head->next;
        
        while(even_head!=NULL and even_head->next!=NULL)
        {
            odd_head->next=odd_head->next->next;
            odd_head=odd_head->next;
            even_head->next=even_head->next->next;
            even_head=even_head->next;   
        }

        odd_head->next=x;
        
        return head;
    }
};
