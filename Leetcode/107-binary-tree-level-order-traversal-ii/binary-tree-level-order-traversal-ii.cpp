/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>vec;
        if(root == NULL){
            return vec;
        }
        int len=0;
        while(!q.empty()){
            TreeNode *temp;
            len=q.size();
		    vector<int> v;
            for(int i=0;i<len;i++){
                temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left !=NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
            }
		        vec.push_back(v);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};