class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //Hash table
        int cnt=0;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp[k-nums[i]]>0){
                cnt++;
                mp[k-nums[i]]--;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return cnt;

        //sorting and 2 pointers
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int low=0,high=n-1,cnt=0;
        // while(low<high){
        //     if(nums[low]+nums[high]==k){
        //         cnt++;
        //         low++;
        //         high--;
        //     }
        //     else if(nums[low]+nums[high]>k){
        //         high--;
        //     }
        //     else{
        //         low++;
        //     }
        // }
        // return cnt;
    }
};