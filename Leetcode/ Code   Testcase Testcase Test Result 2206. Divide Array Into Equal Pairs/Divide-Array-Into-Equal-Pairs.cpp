class Solution {
public:
    int dfs(vector<int> adj[], int s, vector<bool> &visited) {
        visited[s] = 1;
        int cnt = 1;
        for(int u : adj[s]) {
            if(!visited[u]){
                cnt += dfs(adj, u, visited);
            }
        }
        return cnt;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<int>graph[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j) continue;
                int x1 = bombs[i][0];
                int x2 = bombs[j][0];
                int y1 = bombs[i][1];
                int y2 = bombs[j][1];
                int r1 = bombs[i][2];
                double r2 = bombs[j][2];
                //distance between centres should be less than equal to r1 or r2.
                double dist = pow(pow(bombs[i][0] - bombs[j][0], 2) + pow(bombs[i][1] - bombs[j][1], 2), 0.5);
                if(dist <= r1){
                    graph[i].push_back(j);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<graph[i].size()<<\\
\;
        // }
        // for(int i=0;i<n;i++){
        //     for(auto j : graph[i])
        //         cout<<i<<\->\<<j<<\ \;
        //     cout<<\\
\;
        // }
        int ans=0;
        for(int i=0; i<n; i++) {
            vector<bool>visited(n,false);
            ans = max(ans, dfs(graph,i, visited));
        }
        return ans;
    }
};