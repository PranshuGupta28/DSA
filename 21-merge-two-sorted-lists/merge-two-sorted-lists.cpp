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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode*temp3=new ListNode(-1);
//         ListNode*head=temp3;
//         ListNode*temp1=list1;
//         ListNode*temp2=list2;

//         // if(list1==NULL && list2==NULL){
//         //     return NULL;
//         // }
//         // if(list1==NULL && list2!=NULL){
//         //     return list2;
//         // }
//         // if(list1!=NULL && list2==NULL){
//         //     return list1;
//         // }


//         while(temp1!=NULL&& temp2!=NULL){
//             if(temp1->val<temp2->val){
//                 temp3->next=temp1;
//                 temp3=temp3->next;
//                 temp1=temp1->next;
//             }
//             else if(temp1->val>temp2->val){
//                 temp3->next=temp2;
//                 temp3=temp3->next;
//                 temp2=temp2->next;
//             }
//             else{
//                 temp3->next=temp1;
//                 temp1=temp1->next;
//                 temp3=temp3->next;
//             }
//         }

//         while(temp1!=NULL){
//          temp3->next=temp1;
//          temp3=temp3->next;
//          temp1=temp1->next;
//             }

//         while(temp2!=NULL){
//          temp3->next=temp2;
//          temp3=temp3->next;
//          temp2=temp2->next;
//             }
//             head= head->next;
//             return head;

        
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* head = dummyNode;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                dummyNode->next = temp1;
                dummyNode = dummyNode->next;
                temp1= temp1->next;
                
            }

            else{
                dummyNode->next = temp2;
                 dummyNode = dummyNode->next;
                temp2 = temp2->next;
               
            }
        }

        while(temp1 != NULL){
            dummyNode->next = temp1;
            temp1= temp1->next;
            dummyNode = dummyNode->next;
        }

        while(temp2 != NULL){
           dummyNode->next = temp2;
            temp2 = temp2->next;
            dummyNode = dummyNode->next;
        }
        dummyNode = head;
        head= head->next;
        dummyNode->next = NULL;
        delete dummyNode;
        return head;
        
     }
};