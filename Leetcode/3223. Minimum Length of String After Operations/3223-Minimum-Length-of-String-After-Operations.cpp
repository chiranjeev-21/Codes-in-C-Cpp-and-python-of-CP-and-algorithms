class Solution {
public:
    int minimumLength(string s) {
        // a=3 -> 1
        // b=4 -> 2
        // c=2 -> 2
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto i : mp ){
            int val = i.second;
            if(val%2==0){
                ans+=2;
            }
            else{
                ans+=1;
            }
        }
        return ans;
    }
};