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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=head;
        while(temp->next != NULL) {
            l++;       
            temp = temp->next;
        }
       
        temp=head;      
        l = l-n;             
     
        if(l==(-1)) {
            head = head->next;   
            return head;                        
        }
        else {
            while(l--) {
                temp = temp->next;
            }         
        }
        temp->next = temp->next->next;        
        return head;
    }
};