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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr=head;
        while(curr!=NULL && curr->next!=NULL){
            ListNode* temp = curr->next;
            if(curr->val == temp->val){
                curr->next=temp->next;
                temp->next=NULL;
                delete(temp);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};