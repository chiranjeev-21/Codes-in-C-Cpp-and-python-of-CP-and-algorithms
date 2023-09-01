class Solution {
public:
    vector<int> countBits(int n) {
        // 0 1
        // 1 2
        // 1 2 2 3
        // 1 2 2 3          2 3 3 4
        // 1 2 2 3          2 3 3 4          2 3 3 4             3 4 4 5
        vector<int>vec(n+1,0);
        vec[0]=0;
        for(int i=1;i<=n;i++){
            vec[i]=vec[i/2]+i%2;
        }
        return vec;
    }
};