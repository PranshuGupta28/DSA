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
        ListNode*L1=headA;
        while(L1!=NULL){
            ListNode*L2=headB;
            while(L2!=NULL){
                if(L1==L2){
                    cout<<"Intersected at'"<<L1->val<<"'";
                    return L1;;
                }
                L2=L2->next;
            }
            L1=L1->next;
        }
        cout<<"No intersection";
        return NULL;
    }
};