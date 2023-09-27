class Solution {
public:
   
    int maxPathSum(vector<vector<int>>& mat){
        int n=mat.size();
        int m=mat[0].size();
        int res=mat[0][0];
        priority_queue<array<int, 3>> pq;
        int dir[5] = {1, 0, -1, 0, 1};
        pq.push({mat[0][0], 0, 0});
        while (pq.top()[1] < n - 1 || pq.top()[2] < n - 1) {
            auto [sf, i, j] = pq.top();
            pq.pop();
            for (int d = 0; d < 4; ++d) {
                int x = i + dir[d], y = j + dir[d + 1];
                if (min(x, y) >= 0 && max(x, y) < n && mat[x][y] != -1) {
                    pq.push({min(sf, mat[x][y]), x, y});
                    mat[x][y] = -1; 
                }
            }
        }
        return pq.top()[0] - 1;
    }
    
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        vector<vector<bool>> vis (n,vector<bool>(n));

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    vis[r][c] = true;
                    q.push({r, c});
                }
            }
        }
        
        vector<vector<int>> mat (n,vector<int>(n));
        int lvl = 0;
        vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty()) {
            int siz = q.size();
            while(siz--){
                auto [x,y] = q.front();
                q.pop();
                mat[x][y] = lvl;
                for (int i=0; i<4; i++) {
                    int nx = x+dir[i].first, ny = y+dir[i].second;
                    if (nx>=0 && nx<n && ny>=0 && ny<n && !vis[nx][ny]) {
                        q.push({nx,ny});
                        vis[nx][ny] = true;
                    }
                }
            }
            lvl++;
        }
        int ans = maxPathSum(mat)+1;
        return ans;
    }
};