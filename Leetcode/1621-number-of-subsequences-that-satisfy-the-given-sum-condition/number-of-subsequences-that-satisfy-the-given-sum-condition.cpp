#define mod 1000000007
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans=0;
    
        //using pow(2,right-left) fails as the number is too big, right can be 10^5 in the start.
        //pre compute the power values and store them in an array
        vector<int>pow(n,0);
        pow[0]=1;
        for(int i = 1;i<n;i++){
            pow[i]= ((pow[i-1]*2) % mod);
        }

        int left=0,right=n-1;
        while(left<=right){
            if(nums[left]+nums[right]>target){
                right--;
            }
            else if(nums[left]+nums[right]<=target){
                // ans=ans+pow(2,right-left);
                ans=(ans%mod+pow[right-left]%mod)%mod;
                left++;
            }
            // cout<<left<<" "<<right<<"\n";
        }
        return ans%mod;
    }
};