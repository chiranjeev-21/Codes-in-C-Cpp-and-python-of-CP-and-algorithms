class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0,high=n-1,cnt=0;
        while(low<high){
            if(nums[low]+nums[high]==k){
                cnt++;
                low++;
                high--;
            }
            else if(nums[low]+nums[high]>k){
                high--;
            }
            else{
                low++;
            }
        }
        return cnt;
    }
};