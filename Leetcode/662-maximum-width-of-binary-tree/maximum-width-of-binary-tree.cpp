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
    using ll = long long;
    int widthOfBinaryTree(TreeNode* root) {
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            ll l_idx = q.front().second,r_idx = q.back().second;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                auto x = q.front();
                q.pop();
                auto idx = x.second;
                if (x.first->left)
                    q.push({x.first->left, (ll) 2 * idx});
                if (x.first->right)
                    q.push({x.first->right, (ll) 2 * idx + 1});
            }
            ans = max(ans, int(r_idx - l_idx + 1));
        }
        return ans;
    }
};