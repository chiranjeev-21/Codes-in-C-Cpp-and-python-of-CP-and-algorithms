class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // 10 14 6 13
        // 13  3 -1 7
        int n=nums.size(),ans=0;
        vector<long long>pref(n,0),suff(n,0);
        pref[0]=nums[0],suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
            suff[n-i-1]=suff[n-i]+nums[n-i-1];
        }
        for(int i=0;i<n-1;i++){
            if(pref[i]>=suff[i+1]){
                ans++;
            }
        }
        // for(auto i :pref)   cout<<i<<" ";

        // cout<<"\n\n";

        // for(auto i :suff)   cout<<i<<" ";
        // 10 3
        // 14 -1
        // 6  7
        return ans;
    }
};