class Solution {
private:
    void dfs(unordered_map<string,priority_queue<string , vector<string> , greater<string>>>& mp, string src, vector<string>& ans) {
        while (mp.find(src) != mp.end() && !mp[src].empty()) {
            string next = mp[src].top();
            mp[src].pop();
            // ans.push_back(src);
            dfs(mp, next, ans);
        }
        ans.push_back(src);
        // ans.insert(ans.begin(), src);
    }

public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> ans;
        unordered_map<string, priority_queue<string , vector<string> , greater<string>>> mp;
        for (vector<string>& x : tickets) {
            string from = x[0];
            string to = x[1];
            if (mp.find(from) == mp.end()) {
                mp[from] = priority_queue<string , vector<string> , greater<string>>();
            }
            mp[from].push(to);
        }
        // for(auto i :g){
        //     cout<<i.first<<" -> ";
        //     int sz=i.second.size();
        //     while(sz--){
        //         cout<<i.second.top()<<" ";
        //         i.second.pop();
        //     }
        //     cout<<"\n";
        // }
        string src = "JFK";
        dfs(mp, src, ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
