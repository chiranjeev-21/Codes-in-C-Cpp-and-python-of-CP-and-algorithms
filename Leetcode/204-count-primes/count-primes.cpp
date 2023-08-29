class Solution {
public:
    int countPrimes(int n) {
        vector<bool>vec(n+1,true);
        vec[0]=false;
        vec[1]=false;
        int cnt=0;
        for(int i=2;i<n;i++){
            if(vec[i]){
                cnt++;
                for(int j=2*i;j<n;j+=i){
                    vec[j]=false;
                }
            }
        }
        return cnt;
    }
};