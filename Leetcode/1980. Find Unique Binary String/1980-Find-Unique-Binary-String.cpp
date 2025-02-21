class Solution {
public:
    bool find_str(int i, vector<string>& nums, int n, unordered_set<string>& st, string& ans, string temp) {
        if (temp.length() == n) {
            if (st.find(temp) == st.end()) {
                ans = temp;
                return true;
            }
            return false;
        }

        if (find_str(i + 1, nums, n, st, ans, temp + '0'))
            return true;
        if (find_str(i + 1, nums, n, st, ans, temp + '1'))
            return true;
        
        return false;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        unordered_set<string>st(nums.begin(), nums.end());
        string ans = "";
        find_str(0,nums,n,st,ans,"");
        return ans;
    }
};
