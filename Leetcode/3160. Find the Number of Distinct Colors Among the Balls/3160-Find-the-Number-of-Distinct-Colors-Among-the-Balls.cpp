class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {

        //Slow becuase of std::find

        // int n=queries.size();
        // unordered_set<int>colored_indices;
        // unordered_map<int,vector<int>>mp;
        // unordered_map<int,int>mp1;
        // vector<int>ans;
        // // int cnt=0;
        
        // for(auto query : queries){
        //     int index = query[0];
        //     int color = query[1];
        //     if(colored_indices.find(index)==colored_indices.end()){
        //         mp[color].push_back(index);
        //         mp1[index]=color;
        //         colored_indices.insert(index);
        //         // cnt++;
        //     }
        //     else{
        //         int prev_color = mp1[index];
        //         vector<int>&temp = mp[prev_color];
        //         auto it = find(temp.begin(), temp.end(), index);
        //         temp.erase(it);
        //         mp[color].push_back(index);
        //         mp1[index]=color;
        //         if(mp[prev_color].size()==0){
        //             mp.erase(prev_color);
        //         }
        //     }
        //     // for(auto i : mp){
        //     //     cout<<i.first<<" ";
        //     // }
        //     // cout<<"\n";
        //     ans.push_back(mp.size());
        // }
        // return ans; 


        //Optimal solution
        unordered_map<int,int>mp,mp1;
        vector<int>ans;
        for(auto query : queries){
            int index = query[0];
            int color = query[1];
            if(mp.find(index)==mp.end()){
                mp[index]=color;
                mp1[color]++;
            }
            else{
                int curr_color = mp[index];
                mp1[curr_color]--;
                if(mp1[curr_color]==0){
                    mp1.erase(curr_color);
                }
                mp1[color]++;
                mp[index]=color;
            }
            ans.push_back(mp1.size());
        }
        return ans;
    }
};