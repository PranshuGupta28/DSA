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
        
        while(headB!=NULL){
            ListNode*L1=headA;
            while(L1!=NULL){
                if(L1==headB){
                    cout<<"Intersected at'"<<L1->val<<"'";
                    return headB;;
                }
                L1=L1->next;
            }
            headB=headB->next;
        }
        cout<<"No intersection";
        return NULL;
    }
};