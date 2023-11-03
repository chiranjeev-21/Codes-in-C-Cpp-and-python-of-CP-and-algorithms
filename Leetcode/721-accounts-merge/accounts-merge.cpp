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
        // for(auto i :mergeMail){
        //     for(auto j :i){
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
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