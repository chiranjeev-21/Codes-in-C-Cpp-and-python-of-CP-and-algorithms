class Solution {
public:
    int jump(vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size()-1,ans=0;
        while(right<=n-1){
            int max_jump=0;
            //Simplified bfs for 1d array
            for(int i=left;i<=right;i++){
                max_jump=max(max_jump,i+nums[i]);
            }
            //update the next reachable window from current window -> update left and right
            left=right+1;
            right=max_jump;
            //Number of different windows = ans, so increase ans by 1 after each window update
            ans++;
        }
        return ans;
    }
};