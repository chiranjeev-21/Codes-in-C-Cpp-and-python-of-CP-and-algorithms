class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n-2;i+=3){
            int mini=INT_MAX;
            int maxi=INT_MIN;
            vector<int>temp;
            for(int j=i;j<n && j<i+3;j++){
                temp.push_back(nums[j]);
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
            }
            if(maxi-mini>k){
                return {};
            }
            else{
                ans.push_back(temp);
            }
        }
        return ans;
    }
};