class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=0,high=n-1,ans=0;
        // 1 2 3 4 5 6 7 8 9
        while(low<high){
            ans+=piles[high-1];
            cout<<ans<<" ";
            high-=2;
            low++;
        }
        return ans;
    }
};