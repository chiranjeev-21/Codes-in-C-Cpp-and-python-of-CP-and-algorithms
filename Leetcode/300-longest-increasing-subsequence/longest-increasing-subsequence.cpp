class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec;
        vec.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(vec[vec.size()-1]<nums[i]){
                vec.push_back(nums[i]);
            }
            else{
                auto idx = lower_bound(vec.begin(),vec.end(),nums[i]);
                *idx = nums[i];
            }
        }
        return vec.size();
    }
};