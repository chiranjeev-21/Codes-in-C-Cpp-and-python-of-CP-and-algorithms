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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<int>dup=vec;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(vec[i]==1 && vec[j]==0){
                    cnt++;
                }
            }
        }
        // cout<<cnt<<"\n";
        for(int i=0;i<n;i++){
            if(vec[i]==0){
                vec[i]=1;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(vec[i]==1 && vec[j]==0){
                    ans++;
                }
            }
        }
        // for(int i=temp;i<n;i++){
        //     if(vec[i]==0){
        //         ans++;
        //     }
        // }
        // cout<<cnt<<" "<<ans<<"\n";
        // cout<<max(cnt,ans)<<"\n";


        // cout<<cnt<<"\n";
        for(int i=n-1;i>=0;i--){
            if(dup[i]==1){
                dup[i]=0;
                break;
            }
        }
        int ans2=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(dup[i]==1 && dup[j]==0){
                    ans2++;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<dup[i]<<" ";
        // }
        // cout<<ans2;
        int first=max(cnt,ans);
        int second=max(cnt,ans2);
        // cout<<first<<" "<<second<<"\n";
        if(ans==cnt && cnt==0) cout<<n-1<<"\n";
        else cout<<max(first,second)<<"\n";
    }
    return 0;
}