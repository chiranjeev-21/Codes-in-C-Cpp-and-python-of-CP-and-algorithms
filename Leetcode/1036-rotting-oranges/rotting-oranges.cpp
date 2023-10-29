class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int n=grid.size();
        int m=grid[0].size();
        vector<pair<int,int>>rotten;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    rotten.push_back({i,j});
                }
            }
        }
        queue<pair<int,int>>q;
        for(auto temp :rotten){
            q.push({temp.first,temp.second});
        }
        int ans=0;
        vector<int>dx={-1,0,0,1};
        vector<int>dy={0,1,-1,0};
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        while(!q.empty()){
            ans++;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto temp=q.front();
                int x= temp.first;
                int y=temp.second;
                vis[x][y]=true;
                q.pop();
                for(int i=0;i<4;i++){
                    int new_dx=x+dx[i];
                    int new_dy=y+dy[i];
                    if(new_dx>=0 && new_dx<n && new_dy>=0 && new_dy<m && grid[new_dx][new_dy]==1 && !vis[new_dx][new_dy]){
                        grid[new_dx][new_dy]=2;
                        q.push({new_dx,new_dy});
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return ans-1<0?0:ans-1;
    }
};