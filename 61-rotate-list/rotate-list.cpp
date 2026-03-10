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
    int findlength(ListNode*head){
        int count = 0; 
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL) 
        return head;

        int L = findlength(head);
        k = k % L;
        if (k==0) return head;
        int len = L-k-1;
        ListNode*temp=head;
        while(len!=0){
            temp=temp->next;
            len--;
        }
        ListNode*curr=temp->next;
        temp->next=NULL;
        ListNode*newhead=curr;
        
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=head;
        return newhead;
    }
};