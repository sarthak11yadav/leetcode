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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * theadB;
        while(headA)
        {
        theadB=headB;
         
        while(theadB)
        {
            if(headA==theadB)
                return headA;
            
             theadB=theadB->next;
        }
         
            headA=headA->next;
           
            
        }
        return NULL;
    }
};
