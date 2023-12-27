class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;){
            int start=i;
            while(start<n && nums[start]==0){
                start++;
            }
            int end=start,neg=0,left=-1,right=-1;
            while(end<n && nums[end]!=0){
                if(nums[end]<0){
                    neg++;
                    if(left==-1){
                        left=end;
                    }
                    right=end;
                }
                end++;
            }
            if(neg%2==0){
                ans=max(ans,end-start);
            }
            else{
                if(left!=-1){
                    ans=max(ans,end-left-1);
                }
                if(right!=-1){
                    ans=max(ans,right-start);
                }
            }
            i=end+1;
        }
        return ans;
    }
};