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
    ListNode* reverse_list(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxtNode = head;
        while (curr != NULL) {
            nxtNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxtNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            int cnt = 1;
            ListNode* curr = temp;
            while (cnt < k && curr != NULL) {
                curr = curr->next;
                cnt++;
            }
            if (curr == NULL) {
                if (prev) {
                    prev->next = temp;
                    break;
                }
            }
            ListNode* nxtNode = curr->next;
            curr->next = NULL;
            ListNode* reversedHead = reverse_list(temp);
            if (temp == head) {
                head = reversedHead;
            } else {
                prev->next = reversedHead;
            }
            prev = temp;
            temp = nxtNode;
        }
        return head;
    }
};