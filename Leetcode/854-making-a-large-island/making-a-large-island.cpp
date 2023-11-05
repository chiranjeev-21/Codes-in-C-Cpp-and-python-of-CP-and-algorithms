class Solution {
public:

    struct DSU {	
        vector<int> e;
        DSU(int N) { e = vector<int>(N+1, -1); }

        int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }

        bool connected(int a, int b) { return get(a) == get(b); }

        int size(int x) { return -e[get(x)]; }

        bool unite(int x, int y) {
            x = get(x), y = get(y);
            if (x == y) { return false; }
            if (e[x] > e[y]) { swap(x, y); }
            e[x] += e[y];
            e[y] = x;
            return true;
        }
    };

    bool valid(int a ,int b, int n){
        return a<=n-1 && a>=0 && b>=0 && b<=n-1;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size(),res=0;
        DSU dsu(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int node = i*n + j ;
                if(grid[i][j]==0){
                    continue;
                }
                if(grid[i][j]==1){
                    vector<int>dx = {1,-1,0,0};
                    vector<int>dy = {0,0,1,-1};
                    for(int k=0;k<4;k++){
                        int new_x = i+dx[k];
                        int new_y = j+dy[k];
                        int new_node = new_x*n + new_y;
                        if(valid(new_x,new_y,n) && grid[new_x][new_y]==1){
                            dsu.unite(node,new_node);
                        }
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    continue;
                }
                int node = i*n + j ;
                set<int>st;
                if(grid[i][j]==0){
                    vector<int>dx = {1,-1,0,0};
                    vector<int>dy = {0,0,1,-1};
                    for(int k=0;k<4;k++){
                        int new_x = i+dx[k];
                        int new_y = j+dy[k];
                        int new_node = new_x*n + new_y;
                        if(valid(new_x,new_y,n) && grid[new_x][new_y]==1){
                            st.insert(dsu.get(new_node));
                        }
                    }
                }
                int ans=1;
                for(auto i : st){
                    ans += dsu.size(i);
                }
                res=max(res,ans);
            }
        }
        for(int i=0;i<n*n;i++){
            res=max(res,dsu.size(i));
        }
        return res;
    }
};