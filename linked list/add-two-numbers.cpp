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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        ListNode head(0), *l3 = &head;int carry=0,last_digit;
        
        
        while(l1!=NULL or l2!=NULL or carry)
        {
            int l1_val=l1!=NULL?l1->val:0;
            int l2_val=l2!=NULL?l2->val:0;
            
            int cur_sum=l1_val+l2_val+carry;
            
            carry=cur_sum/10;
            
            last_digit=cur_sum%10;
            
            l3->next= new ListNode(last_digit);
            
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
            
            l3=l3->next;
            
        }
        

        return head.next;
        
        
        
        
        
    }
};
