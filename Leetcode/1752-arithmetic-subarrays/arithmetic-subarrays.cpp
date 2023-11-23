class Solution {
public:

    bool check(vector<int>& temp){
        if(temp.size()==2){
            return true;
        }
        int n=temp.size();
        int diff = temp[1]-temp[0];
        for(int i=2;i<n;i++){
            int diff1 = temp[i]-temp[i-1];
            if(diff1 == diff){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        int m=l.size();
        vector<bool> ans;
        for(int i=0;i<m;i++){
            vector<int>temp;
            int left=l[i] , right = r[i];
            for(int j=left;j<=right;j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            if(check(temp)){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};