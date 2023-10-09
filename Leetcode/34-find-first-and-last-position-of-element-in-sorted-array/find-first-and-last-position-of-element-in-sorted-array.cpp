class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int res=-1,res1=-1;
        if(nums.size()==0){
            return {-1,-1};
        }
        if(nums.size()==1 && nums[0]==target){
            return {0,0};
        }
        while(start<=end){
            int mid=start + (end-start)/2;
            if(nums[mid]==target){
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
        }
        start=0;
        end=n-1;
        while(start<=end){
            int mid=start + (end-start)/2;
            if(nums[mid]==target){
                res1=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
        }
        // cout<<res<<" ";
        return {res,res1};
    }
};