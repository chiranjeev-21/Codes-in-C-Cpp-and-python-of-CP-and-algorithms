class Solution {
public:
    static bool cmp(string& a, string& b) {
        return a.size() < b.size();
    }

    void f(int start, int n, string& s, unordered_set<string>& dict, vector<string>& ans, string& temp, vector<vector<bool>>& dp) {
        if (start == n) {
            ans.push_back(temp.substr(0, temp.size() - 1));  // Remove the trailing space
            return;
        }

        for (int end = start; end < n; ++end) {
            string word = s.substr(start, end - start + 1);
            if (dict.find(word) != dict.end() && dp[start][end]) {
                string oldTemp = temp;
                temp += word + " ";
                f(end + 1, n, s, dict, ans, temp, dp);
                temp = oldTemp;
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int n = s.length();
        string temp = "";
        vector<vector<bool>> dp(n, vector<bool>(n, false));  // dp[i][j] is true if substring s[i:j] can be segmented
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (wordSet.find(s.substr(i, j - i + 1)) != wordSet.end()) {
                    dp[i][j] = true;
                }
            }
        }
        f(0, n, s, wordSet, ans, temp, dp);
        return ans;
    }
};