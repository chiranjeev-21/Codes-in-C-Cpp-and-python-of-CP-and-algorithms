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
        vector<int>vec(n,0),even,ans;
        int cnt=0,cnt_even=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]%2!=0){
                ans.push_back(i+1);
                cnt++;
            }
            else if(vec[i]%2==0){
                even.push_back(i+1);
                cnt_even++;
            }
        }
        // if(cnt_even>=1 && cnt>=2){
        //     cout<<"YES"<<"\n";
        //     for(int i=0;i<ans.size();i++){
        //         cout<<ans[i]<<" ";
        //     }
        //     cout<<even[0]<<"\n";
        // }
        if(ans.size()>=3){
            cout<<"YES"<<"\n";
            for(int i=0;i<3;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else if(even.size()>=2 && ans.size()>=1){
            cout<<"YES"<<"\n";
            for(int i=0;i<2;i++){
                cout<<even[i]<<" ";
            }
            cout<<ans[0]<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }

    return 0;
}