class Solution {
public:

    bool check(vector<int>& nums, long long k, long long mid){
        long long cnt = 0;
        if(mid == 0){
            return true;
        }
        for(int i=0;i<nums.size();i++){
            cnt += nums[i]/mid;
        }
        return cnt<k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int low=1,high=1e9;
        while(low<high){
            long long mid=low+(high-low)/2;
            if(check(candies,k,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low-1;
    }
};