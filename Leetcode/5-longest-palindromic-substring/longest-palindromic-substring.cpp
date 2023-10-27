class Solution {
public:
    string longestPalindrome(string s) {
        int best_len = 0;
        string best_s = "";
        int n = s.length();
        //odd length
        for(int mid = 0; mid < n; mid++) {
            for(int x = 0; x<=mid; x++) {
                if(s[mid-x] != s[mid+x]) {
                    break;
                }
                int len = 2 * x + 1;
                if(len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x, len);
                }
            }
        }
        //even length 
        for(int mid = 0; mid < n; mid++) {
            for(int x = 0; x <= mid + 1 ; x++) {
                if(s[mid-x+1] != s[mid+x]) {
                    break;
                }
                int len = 2 * x;
                if(len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x + 1, len);
                }
            }
        }
        return best_s;
    }
};