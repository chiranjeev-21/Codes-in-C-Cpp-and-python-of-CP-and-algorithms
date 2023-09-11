class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            int temp=i.second;
            int first=i.first;
            while(temp>0){
                vector<int>vec(first,0);
                ans.push_back(vec);
                temp-=first;
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            int val=nums[i];
            int temp=i;
            for(int j=0;j<ans.size();j++){
                if(ans[j].size()==val && ans[j].back()==0){
                    for(int k=0;k<ans[j].size();k++){
                        if(ans[j][k]==0){
                            ans[j][k]=temp;
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};