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

    int findLength(ListNode*head){
        int l=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {  

        int len=findLength(head);
        int x=len-n+1;
        
        if(head==NULL){
            return NULL;
        }
        if(x==1){
            head=head->next;
            return head;
        }

        if (x==len){
            ListNode*temp=head;
            int i=1;
            while(i<len-1){
            temp=temp->next;
            i++;
            }
            temp->next=NULL;
            return head;
        }
        
        ListNode*prev=head;
        int i=1;
        while(i<x-1){
            prev=prev->next;
            i++;
        }

        ListNode*curr=prev->next;
        ListNode*temp=curr->next;

        prev->next=temp;
        curr->next=NULL;
        delete curr;   
        return head;

    }
};