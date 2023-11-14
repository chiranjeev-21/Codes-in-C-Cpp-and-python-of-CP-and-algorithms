#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    static bool cmp(string& a, string& b) {
        return a.size() < b.size();
    }

    void wordBreakHelper(int start, int n, string& s, unordered_set<string>& dict, vector<string>& ans, string& temp, vector<bool>& dp) {
        if (start == n) {
            ans.push_back(temp.substr(0, temp.size() - 1));  // Remove the trailing space
            return;
        }

        for (int end = start; end < n; ++end) {
            string word = s.substr(start, end - start + 1);
            if (dict.find(word) != dict.end() && dp[start]) {
                string oldTemp = temp;
                temp += word + " ";
                wordBreakHelper(end + 1, n, s, dict, ans, temp, dp);
                temp = oldTemp;
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int n = s.length();
        string temp = "";
        vector<bool> dp(n + 1, false);  // dp[i] is true if substring s[0:i-1] can be segmented
        dp[0] = true;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        if (dp[n]){
            wordBreakHelper(0, n, s, wordSet, ans, temp, dp);
        }
        return ans;
    }
};
