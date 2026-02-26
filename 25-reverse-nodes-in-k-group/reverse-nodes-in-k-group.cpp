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

    int findLen(ListNode*head){
        int len=0;
        while(head!=NULL){
            head=head->next;
            len++;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*temp = curr->next;
        int i=0;
        int len=findLen(head);
        if(k>len){
            return head; 
        }
        while(i<k && curr != NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            i++;
        }
        if(temp!=NULL)
        head->next=reverseKGroup(curr,k) ;
        return prev;
    }
};