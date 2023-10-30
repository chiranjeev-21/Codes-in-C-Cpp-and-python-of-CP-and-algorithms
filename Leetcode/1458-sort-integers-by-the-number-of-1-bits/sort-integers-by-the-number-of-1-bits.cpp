class Solution {
public:

    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second<b.second;
    }

    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int ones = __builtin_popcount(arr[i]);
            ans.push_back({ones,arr[i]});
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<int>res;
        for(auto i :ans){
            res.push_back(i.second);
        }
        return res;
    }
};