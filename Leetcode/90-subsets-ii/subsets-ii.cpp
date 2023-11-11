class Solution {
public:
    // #define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    void solve(set<vector<int>> &res, const vector<int> &nums, int i, int n, vector<int> temp)
    {
        if (i == n)
        {
            sort(temp.begin(), temp.end()); 
            res.insert(temp);
            return;
        }

        temp.push_back(nums[i]);
        solve(res, nums, i + 1, n, temp);
        temp.pop_back();
        solve(res, nums, i + 1, n, temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        // IOS;
        set<vector<int>> res;
        int n = nums.size();
        vector<int> temp;
        solve(res, nums, 0, n, temp);
        vector<vector<int>> ans;
        for (auto vec : res)
            ans.push_back(vec);
        return ans;
    }
};