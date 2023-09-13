class Solution {
public:

    void f(int ind,vector<int>&v, int target, vector<vector<int>>& ans, vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
        }
        for(int i=ind;i<v.size();i++){
            if(i>ind && v[i]==v[i-1])
                continue;
            if(v[i]>target)
                break;
            temp.push_back(v[i]);
            f(i+1,v,target-v[i],ans,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        f(0,candidates,target,ans,temp);
        return ans;
    }
};