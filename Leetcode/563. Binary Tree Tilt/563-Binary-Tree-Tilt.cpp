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

    int f(TreeNode* root,int& tilt){
        if(!root){
            return 0;
        }
        if (!root->left && !root->right) {
            return root->val;
        }
        int lcall =f(root->left,tilt);
        int rcall = f(root->right,tilt);
        tilt+=abs(lcall-rcall);
        return root->val+lcall+rcall;
    }

    int findTilt(TreeNode* root) {
        int tilt=0;
        f(root,tilt);
        return tilt;
    }
};