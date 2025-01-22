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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr=head;
        vector<int>vec;
        int n=0;
        while(curr){
            n++;
            vec.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>ans(n,-1);
        stack<int>s;
        s.push(0);
        for(int i=n-1;i>=0;i--){
            int curr=vec[i];
            while(s.top()!=0 && curr>=s.top()){
                s.pop();
            }
            ans[i]=s.top();
            s.push(vec[i]);
        }

        return ans;
    }
};