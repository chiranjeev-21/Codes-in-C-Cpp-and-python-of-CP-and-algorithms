class Solution {
public:
    //https://leetcode.com/problems/longest-increasing-path-in-a-matrix/solutions/288520/longest-path-in-dag/
    int dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp){
        int cnt=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i+1<grid.size() && grid[i+1][j]>grid[i][j]){
            cnt=max(cnt,dfs(grid,i+1,j,dp));
        }
        if(i-1>=0 && grid[i-1][j]>grid[i][j]){
            cnt=max(cnt,dfs(grid,i-1,j,dp));
        }
        if(j+1<grid[0].size() && grid[i][j+1]>grid[i][j]){
            cnt=max(cnt,dfs(grid,i,j+1,dp));
        }
        if(j-1>=0 && grid[i][j-1] > grid[i][j]){
            cnt=max(cnt,dfs(grid,i,j-1,dp));
        }
        return dp[i][j]=cnt+1;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=INT_MIN;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dp[i][j]==-1){
                    dfs(matrix,i,j,dp);
                }
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};