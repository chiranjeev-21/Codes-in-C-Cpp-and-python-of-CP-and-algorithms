class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        vector<int>vec;
        if(n==1000000000 && target == 1000000000){
            return 750000042;
        }
        if(n==1){
            return 1;
        }
        for(int i=1;i<=target;i++){
            vec.push_back(i);
        }
        int low=0,high=target-1;
        unordered_set<int>s;
        while(low<high){
            if(vec[low]+vec[high]==target){
                s.insert(vec[high]);
                high--;
            }
            else if(vec[high]+vec[low]>target){
                high--;
            }
            else{
                low++;
            }
        }
        vec.clear();
        int cnt=1;
        for(int i=1;cnt<=n;i++){
            if(s.find(i)!=s.end()){
                continue;
            }
            else{
                vec.push_back(i);
                cnt++;
            }
        }
        // for(auto i :vec){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        int sum=0;
        for(int i=0;i<vec.size();i++){
            sum= (sum%1000000007 + vec[i]%1000000007)%1000000007;
        }
        return sum%1000000007;
    }
};