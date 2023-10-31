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
 //O(N) APPROACH
class Solution {
    int f(TreeNode* root,int &maxi){
        if(root==NULL)
            return 0;

        int lh=f(root->left,maxi);
        int rh=f(root->right,maxi);

        maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        f(root,maxi);
        return maxi;
    }
};