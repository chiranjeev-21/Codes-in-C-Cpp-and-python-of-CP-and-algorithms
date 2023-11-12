class Solution {
public:

    void dfs(unordered_map<int,vector<int>>& graph, int src, unordered_map<int,int>& vis, vector<int>& result){
        if(vis[src]){
            return;
        }
        vis[src]=1;
        for (auto v : graph[src]) {
            if (!vis[v]) {
                result.push_back(v);
                dfs(graph, v, vis, result);
            }
        }
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> graph;
        for (const auto& pair : adjacentPairs) {
            graph[pair[0]].push_back(pair[1]);
            graph[pair[1]].push_back(pair[0]);
        }
        vector<int> result;
        int startNode;
        for (const auto& entry : graph) {
            if (entry.second.size() == 1) {
                startNode = entry.first;
                break;
            }
        }
        result.push_back(startNode);
        unordered_map<int,int>vis;
        dfs(graph,startNode,vis,result);
        return result;
    }
};