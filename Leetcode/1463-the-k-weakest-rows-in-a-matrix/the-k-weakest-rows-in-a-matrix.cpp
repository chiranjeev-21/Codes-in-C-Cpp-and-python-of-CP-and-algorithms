class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            vec.push_back({cnt,i});
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};