class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0,high=n-1,ans=0,sum=0;
        while(low<high){
            sum=nums[low]+nums[high];
            ans=max(sum,ans);
            low++;
            high--;

        }
        return ans;
    }
};