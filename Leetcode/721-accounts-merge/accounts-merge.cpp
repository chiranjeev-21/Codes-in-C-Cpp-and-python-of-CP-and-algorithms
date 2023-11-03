// class Solution {
// public:
//     vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
//         unordered_map<string, string> emailToName;
//         unordered_map<string, set<string>> graph;
//         for (const auto& account : accounts) {
//             const string& name = account[0];
//             for (int i = 1; i < account.size(); ++i) {
//                 emailToName[account[i]] = name;
//                 if (i == 1) continue;
//                 graph[account[i]].insert(account[i - 1]);
//                 graph[account[i - 1]].insert(account[i]);
//             }
//         }

//         vector<vector<string>> result;
//         unordered_map<string, bool> visited;
//         for (const auto& [email, _] : emailToName) {
//             if (!visited[email]) {
//                 vector<string> component;
//                 dfs(graph, email, visited, component);
//                 sort(component.begin(), component.end());
//                 component.insert(component.begin(), emailToName[email]);
//                 result.push_back(move(component));
//             }
//         }
//         return result;
//     }

//     void dfs(unordered_map<string, set<string>>& graph, const string& email,
//              unordered_map<string, bool>& visited, vector<string>& component) {
//         visited[email] = true;
//         component.push_back(email);
//         for (const auto& neighbor : graph[email]) {
//             if (!visited[neighbor]) {
//                 dfs(graph, neighbor, visited, component);
//             }
//         }
//     }
// };
struct DSU {
	vector<int> e;
	DSU(int N) { e = vector<int>(N, -1); }

	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }

	bool same_set(int a, int b) { return get(a) == get(b); }

	int size(int x) { return -e[get(x)]; }

	bool unite(int x, int y) {
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return true;
	}
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        DSU ds(n);
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail = accounts[i][j];
                if(mp.find(mail) == mp.end()){
                    mp[mail] = i;
                }
                else{
                    ds.unite(i, mp[mail]);
                }
            }
        }

        vector<string> mergeMail[n];
        for(auto it: mp){
            string mail = it.first;
            int node = ds.get(it.second);
            mergeMail[node].push_back(mail);
        }

        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            if(mergeMail[i].size() == 0) continue;
            sort(mergeMail[i].begin(), mergeMail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for (auto it : mergeMail[i]) {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};