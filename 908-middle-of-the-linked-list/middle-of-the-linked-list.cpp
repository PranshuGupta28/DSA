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
//    int findL(ListNode*head) {
//         int len=0;
//         ListNode*temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             len++;
//         }
//         return len;
//     }


//     ListNode* middleNode(ListNode* head) {
//           int h=findL(head)/2;
//          int len=0;
//          ListNode*temp=head;
//          while(len<h){
//             temp=temp->next;
//             len++;
//          }
//          return temp;
//     }
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode*slow = head;
        ListNode*fast = head;

        while(slow !=NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

};