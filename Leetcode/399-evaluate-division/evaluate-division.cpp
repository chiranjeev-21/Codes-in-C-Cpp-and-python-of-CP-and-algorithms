class Solution {
public:

    double dfs(map<string, vector<pair<string, double>>>& adj, string& src, string& dest, unordered_set<string>& visited, double currentWeight){
    visited.insert(src);
    if (src == dest)
        return currentWeight;
    for (auto neighbor : adj[src]) {
        string nextNode = neighbor.first;
        double weight = neighbor.second;
        // cout<<nextNode<<" "<<weight<<"\n";
        if (visited.find(nextNode) == visited.end()) {
            double result = dfs(adj, nextNode, dest, visited,currentWeight * weight);
            if (result != -1)
                return result;
        }
    }
    return -1;
}

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        set<string>st;
        int n=equations.size();
        for(int i=0;i<n;i++){
            st.insert(equations[i][0]);
            st.insert(equations[i][1]);
        }
        map<string, vector<pair<string, double>>> adj;
        for(int i=0;i<n;i++){
            adj[equations[i][0]].push_back(make_pair(equations[i][1], values[i]));
            adj[equations[i][1]].push_back(make_pair(equations[i][0], (1/values[i])));
        }
        // for (auto vertex : adj) {
        //     cout << "Adjacency list of vertex " << vertex.first << ": ";
        //     for (auto edge : vertex.second) {
        //         cout << "(" << edge.first << ", " << edge.second << ") ";
        //     }
        //     cout << endl;
        // }
        vector<double>ans;
        for(int i=0;i<queries.size();i++){
            if(st.find(queries[i][0])==st.end() || st.find(queries[i][1])==st.end()){
                ans.push_back(-1);
            }
            else{
                unordered_set<string> visited;
                string source = queries[i][0];
                string destination = queries[i][1];
                double W=1;
                double temp = dfs(adj, source, destination, visited, W);
                if (temp != -1){
                    ans.push_back(temp);
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};