class Solution {
public:

    bool check(int i, int j, int n, int m ){
        return i>=0 && j>=0 && i<n && j<m;    
    }

    void bfs(int i, int j, unordered_set<int>&vis, vector<vector<int>>&heights, int n, int m){
        queue<pair<int,int>>q;
        q.push({i,j});
        //NOTE HERE - i*m not i*n
        vis.insert(i*m+j);
        vector<int>dx={-1,1,0,0};
        vector<int>dy={0,0,1,-1};
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int new_dx = dx[k]+x;
                int new_dy = dy[k]+y;
                if(check(new_dx,new_dy,n,m) && heights[new_dx][new_dy]>=heights[x][y] && vis.find(new_dx*m+new_dy)==vis.end()){
                    q.push({new_dx,new_dy});
                    vis.insert(new_dx*m+new_dy);
                }
            }
        }
        return;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>ans;
        // vector<int>ans;
        //Start from the ocean and traverse inwards
        unordered_set<int>pacific,atlantic;
        for(int j=0;j<m;j++){
            bfs(0,j,pacific,heights,n,m);   //up
            bfs(n-1,j,atlantic,heights,n,m);  //down
        }
        for(int i=0;i<n;i++){
            bfs(i,0,pacific,heights,n,m);  //left
            bfs(i,m-1,atlantic,heights,n,m);  //right
        }
        for(auto i:atlantic){
            if(pacific.find(i)!=pacific.end()){
                int x = i / m;
                int y = i % m;
                ans.push_back({x, y});
            }
        }
        return ans;
    }
};