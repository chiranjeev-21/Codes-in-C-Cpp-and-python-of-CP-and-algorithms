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

    bool traverse(TreeNode* root, unordered_set<int>& s, int k){
        if(!root){
            return 0;
        }
        int val = root->val;
        if(s.find(val)!=s.end()){
            return true;
        }
        s.insert(k-val);
        return traverse(root->left, s, k) || traverse(root->right, s, k);
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s;
        bool flag=traverse(root,s,k);
        return flag;
    }
};