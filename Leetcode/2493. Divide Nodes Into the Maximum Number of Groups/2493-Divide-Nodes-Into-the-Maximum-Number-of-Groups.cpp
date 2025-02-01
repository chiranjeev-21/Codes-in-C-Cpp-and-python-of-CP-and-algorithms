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

    void f(TreeNode*left, TreeNode *right, int level){
        if(!left && !right){
            return;
        }
        if(level%2!=0){
            swap(left->val,right->val);
        }
        f(left->left,right->right,level+1);
        f(left->right,right->left,level+1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        int level=1;
        if (root == NULL) 
            return root;
        f(root->left,root->right,level);
        return root;
    }
};