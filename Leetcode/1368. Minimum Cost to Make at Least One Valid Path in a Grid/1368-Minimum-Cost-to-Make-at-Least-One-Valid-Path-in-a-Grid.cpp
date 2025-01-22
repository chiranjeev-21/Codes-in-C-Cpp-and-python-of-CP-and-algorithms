class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> cost(n,vector<int>(m,INT_MAX));
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({0,0,0});
        int chk[4]={1,2,3,4};
        int dr[4]={0,0,1,-1};
        int dc[4]={1,-1,0,0};
        while(!pq.empty()){
            auto it=pq.top();
            int curr=it[0];
            int r=it[1];
            int c=it[2];
            pq.pop();
            cost[r][c]=curr;
            if(r==n-1 && c==m-1){
                return curr;
            }
            for(int i=0; i<4; i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(grid[r][c]==chk[i]){
                    if(nr>=0 && nr<n && nc>=0 && nc<m && cost[nr][nc]>curr){
                        cost[nr][nc]=curr;
                        pq.push({curr,nr,nc});
                    }
                }
                else{
                    if(nr>=0 && nr<n && nc>=0 && nc<m && cost[nr][nc]>curr+1){
                        cost[nr][nc]=curr+1;
                        pq.push({curr+1,nr,nc});
                    }
                }
            }
        }
        return cost[n-1][m-1];
    }
};