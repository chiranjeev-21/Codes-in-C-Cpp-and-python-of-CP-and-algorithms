class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCounts(26);
        for (char c : chars) charCounts[c - 'a']++;
        int total = 0;
        for (string& word : words) {
            vector<int> available = charCounts;
            bool good = true;
            for (char c : word) {
                if (--available[c - 'a'] < 0) {
                    good = false;
                    break;
                }
            }
            if (good) total += word.size();
        }
        return total;
    }
};