    #include <bits/stdc++.h>

    using namespace std;
    // Some typedef's
    typedef long long ll;
    typedef unsigned long long ull;
    const int inf = 1e9 + 7;
    const double eps = 1e-6;
    const double pi = 1.00 * acos(-1.00);
    #define IOS                  \
        ios::sync_with_stdio(0); \
        cin.tie(0);              \
        cout.tie(0);
    typedef long long ll;
    int main()
    {
        IOS;
        ll n,m;
        cin>>n>>m;
        vector<ll>vec(n,0);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        if(n-m==0){
            cout<<1;
        }
        else if(m==1){
            int min_ele = *min_element(vec.begin(),vec.end());
            for(int i=0;i<n;i++){
                if(vec[i]==min_ele){
                    cout<<i+1;
                    break;
                }
            }
        }
        else{
        vector<int>answer(n-m+1,0);
        ll window_sum=0;
        for(ll i=0;i<m;i++){
            window_sum+=vec[i];
        }
        ll i=0,ans=INT_MAX;
        while(i<(n-m)){
            ans=min(ans,window_sum);
            answer[i]=ans;
            window_sum=window_sum-vec[i]+vec[i+m];
            i++;
        }
        int min_ele = *min_element(answer.begin(),answer.end());
        for(int i=0;i<answer.size();i++){
            if(answer[i]==min_ele){
                cout<<i+1;
                break;
            }
        }
        }
        return 0;
    }