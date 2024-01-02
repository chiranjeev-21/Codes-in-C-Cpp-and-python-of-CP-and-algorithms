class Solution {
public:

    vector<int>check(unordered_map<int,int>& mp){
        vector<int>temp;
        for(auto i : mp){
            if(i.second>0){
                temp.push_back(i.first);
                mp.at(i.first)=i.second-1;
            }
        }
        return temp;
    }

    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>>ans;
        while(1){
            vector<int>vec=check(mp);
            if(vec.size()==0){
                break;
            }
            else{
                ans.push_back(vec);
            }
        }
        return ans;
    }
};