class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long n=grid[0].size();
        vector<long long>pref(n,0),suff(n,0);
        pref[0]=grid[0][0];
        suff[n-1]=grid[1][n-1];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+grid[0][i];
            suff[n-i-1] = suff[n-i]+grid[1][n-i-1];
        }
        // long long pivotDown=0,maxx=0;
        // for(int i=0;i<n;i++){
        //     if(pref[i]+suff[i]>maxx){
        //         maxx=pref[i]+suff[i];
        //         pivotDown=i;
        //     }
        // }

        // long long ans=0;
        // ans=max(pref[n-1]-pref[pivotDown],suff[0]-suff[pivotDown]);
        long long result=LLONG_MAX;
        for (int i=0;i<n;i++) {
            long long ans = max((i==n-1?0:pref[n - 1]-pref[i]),(i==0?0:suff[0]-suff[i]));
            result = min(result,ans);
        }
        return result;
    }
};