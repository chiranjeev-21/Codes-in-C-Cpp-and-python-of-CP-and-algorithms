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
        int n,k;
        cin>>n>>k;
        vector<int>health(n,0),power(n,0);
        for(int i=0;i<n;i++){
            cin>>health[i];
        }
        for(int i=0;i<n;i++){
            cin>>power[i];
        }
        bool boolean=true;
        int val=0;
        while(true){
            int count=0;
            for(int i=0;i<n;i++){
                if(health[i]==0){
                    count++;
                }
            }
            if(count==n && k>0){
                val=1;
                break;
            }
            for(int i=0;i<n;i++){
                health[i]-=k;
                if(health[i]<0){
                    health[i]=0;
                }
            }

            // for(int i=0;i<n;i++){
            //     cout<<health[i]<<" ";
            // }
            // cout<<"\n";

            int min=INT_MAX,cnt=0;
            for(int i=0;i<power.size();i++){
                if(power[i]<min && health[i]!=0){
                    min=power[i];
                }
                else if(power[i]<min && health[i]==0){
                    cnt++;
                }
            }
            if(cnt==n){
                min=0;
            }
            // cout<<min<<"\n";
            k-=min;
            if(k<=0){
                val=0;
                break;
            }
            if(min>k){
                val=0;
                break;
            }
            
            // cout<<k<<"\n";
            
        }
        if(val>0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }

    return 0;
}