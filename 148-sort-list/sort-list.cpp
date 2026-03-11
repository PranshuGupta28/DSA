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
     ListNode* arrtoLL(vector<int>& arr){
        if(arr.empty()) return NULL;

        ListNode* head = new ListNode(arr[0]);
        ListNode* curr = head;

        for (int i = 1; i < arr.size(); i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return head;
    }

    ListNode* sortList(ListNode* head) {
        vector<int>arr; 
        ListNode*temp=head;
         while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        return arrtoLL(arr);
    }
};