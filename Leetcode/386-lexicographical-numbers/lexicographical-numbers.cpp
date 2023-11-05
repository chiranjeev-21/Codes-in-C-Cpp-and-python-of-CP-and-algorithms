class Solution {
public:

    void dfs(int cur, int n, vector<int>& res){
        if(cur>n)
            return;
        else{
            res.push_back(cur);
            for(int i=0;i<10;++i){
                if(10*cur+i>n)
                    return;
                dfs(10*cur+i, n, res);
            }
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int>vec;
        for(int i=1;i<10;i++){
            dfs(i,n,vec);
        }
        return vec;
    }
};