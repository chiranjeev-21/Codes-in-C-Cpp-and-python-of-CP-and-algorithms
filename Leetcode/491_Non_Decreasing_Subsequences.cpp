class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        s.insert(vector<int>({}));
        for (auto x : nums) {
            set<vector<int>> tmp_s;
            for (auto cur_s : s) {
                if (cur_s.empty() || cur_s.back() <= x) {
                    vector<int> new_s = cur_s;
                    new_s.push_back(x);
                    tmp_s.insert(new_s);
                }
            }
            s.insert(tmp_s.begin(), tmp_s.end());
        }
        // for (auto x : s) {
        //     ans.push_back(x);
        // }
        for (auto x : s) {
            if (x.size() >= 2) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};