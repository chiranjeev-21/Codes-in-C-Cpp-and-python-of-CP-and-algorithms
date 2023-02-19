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
        string s;
        cin>>s;
        bool boolean=false;
        int x_cor=0,y_cor=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                y_cor++;
            }
            else if(s[i]=='R'){
                x_cor++;
            }
            else if(s[i]=='D'){
                y_cor--;
            }
            else if(s[i]=='L'){
                x_cor--;
            }
            if(x_cor ==1 && y_cor==1){
                 boolean=true;
            }
        }
        if(boolean) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
        
    }

    return 0;
}