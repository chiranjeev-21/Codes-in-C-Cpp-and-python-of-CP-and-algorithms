class Solution {
public:
    struct DSU {
        vector<int> e;

        DSU(int N) { e = vector<int>(N, -1); }

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

    template <class T> T kruskal(int N, vector<pair<T, pair<int, int>>> edges) {
        sort(edges.begin(), edges.end());
        T ans = 0;
        DSU D(N + 1);
        for (pair<T, pair<int, int>> &e : edges) {
            if (D.unite(e.second.first, e.second.second)) { ans += e.first; }
        }
        return (D.size(1) == N ? ans : -1);
    }

    int manhattan(int x1, int x2, int y1, int y2){
        return abs(x1-x2) + abs(y1-y2);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<pair<int, pair<int, int>>> edges;
        // map<pair<int,int>,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[{points[i][0],points[i][1]}] = i;
        // }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // edges.push_back({manhattan(points[i][0], points[i][1], points[j][0], points[j][1]), {mp[{points[i][0],points[i][1]}], mp[{points[j][0],points[j][1]}]}});
                edges.push_back({manhattan(points[i][0], points[j][0], points[i][1], points[j][1]), {i,j}});
            }
        }

        // for(int i=0;i<edges.size();i++){
        //     int temp = edges[i].first;
        //     int temp1 = edges[i].second.first;
        //     int temp2=edges[i].second.second;
        //     cout<<temp<<" "<<temp1<<" "<<temp2<<" ";
        //     cout<<"\n";
        // }
        long long ans = kruskal(n, edges);
        return ans;
    }
};
