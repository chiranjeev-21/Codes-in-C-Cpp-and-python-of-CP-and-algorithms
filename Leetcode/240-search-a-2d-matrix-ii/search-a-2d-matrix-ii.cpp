class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int x=0, y=nums[0].size()-1;
        while(x<nums.size() && y>=0){
            if(nums[x][y] == target){
                return true;
            }
            if(nums[x][y] > target){
                y--;
            }
            else{
                x++;
            }
        }
        return false;  
    }
};