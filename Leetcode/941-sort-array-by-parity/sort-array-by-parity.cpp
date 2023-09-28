class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        sort(nums.begin(), nums.end(), [](int a, int b) {
            return (a % 2) < (b % 2);
        });

        // int left=0,right=1;
        // // [0,1]
        // while(right<nums.size()){
        //     if(nums[left]%2==0){
        //         left++;
        //         right++;
        //     }
        //     else if(nums[left]%2!=0 && nums[right]%2==0){
        //         swap(nums[left],nums[right]);
        //         left++;
        //         right++;
        //     }
        //     else if(nums[left]%2!=0 && nums[right]%2!=0){
        //         right++;
        //     }
        // }
        return nums;
    }
};