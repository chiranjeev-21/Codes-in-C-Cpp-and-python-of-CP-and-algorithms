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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* temp = root;
        int n = preorder.size();
        for (int i = 1; i < n; i++) {
            while (true) {
                if (preorder[i] < temp->val) {
                    if (temp->left)
                        temp = temp->left;
                    else {
                        temp->left = new TreeNode(preorder[i]);
                        temp = root;
                        break;
                    }
                }
                if (preorder[i] > temp->val) {
                    if (temp->right)
                        temp = temp->right;
                    else {
                        temp->right = new TreeNode(preorder[i]);
                        temp = root;
                        break;
                    }
                }
            }
        }
        return root;
    }
};