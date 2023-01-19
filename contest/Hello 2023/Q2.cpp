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
        if(n==3){
            cout<<"NO"<<"\n";
            continue;
        }
        else if(n%2==0){
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i+=2){
                vec[i]=1;
                vec[i+1]=-1;
            }
            int sum=0;
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            int t=n/2;
            for(int i=0;i<n;i+=2){
                vec[i]=1-t;
                vec[i+1]=t;
            }
            vec[n-1]=1-t;
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}