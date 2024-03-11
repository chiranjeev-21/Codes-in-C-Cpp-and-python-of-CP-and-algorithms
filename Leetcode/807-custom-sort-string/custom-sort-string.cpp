class Solution {
public:
    string customSortString(string order, string s) {
        int n=order.size();
        int m=s.size();
        vector<bool>vec(26,0);
        unordered_map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        string ans="";
        for(auto i :order){
            int times=0;
            if(mp.find(i)!=mp.end()){
                times = mp[i];
                mp[i]=0;
            }
            while(times--){
                ans+=i;
            }
        }
        for(auto i :mp){
            int times=0;
            if(i.second > 0){
                times=i.second;
            }
            while(times--){
                ans+=i.first;
            }
        }
        return ans;
    }
};