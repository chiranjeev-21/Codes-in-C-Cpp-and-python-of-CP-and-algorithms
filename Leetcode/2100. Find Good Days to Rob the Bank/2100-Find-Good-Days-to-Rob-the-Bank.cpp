class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n=security.size();
        vector<int>non_increasing(n,0),non_decreasing(n,0);
        
        for(int i=1;i<n;i++){
            if(security[i]<=security[i-1]){
                non_increasing[i]=non_increasing[i-1]+1;
            }
            else{
                non_increasing[i]=0;
            }
        }

        for(int i=n-2;i>=0;i--){
            if(security[i]<=security[i+1]){
                non_decreasing[i]=non_decreasing[i+1]+1;
            }
            else{
                non_increasing[i]=0;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(non_decreasing[i]>=time && non_increasing[i]>=time){
                ans.push_back(i);
            }
        }
        return ans;
    }
};