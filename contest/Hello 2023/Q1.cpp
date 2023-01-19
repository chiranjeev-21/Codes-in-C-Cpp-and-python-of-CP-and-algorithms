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
        int index_left=0,index_right=0;
        bool boolean=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
                index_left=i;
                index_right=i-1;
                boolean=true;
                break;
            }
            if(s[i]=='R' && s[i+1] == 'L'){
                index_right = i;
                index_left=i-1;
                boolean=false;
                break;
            }
        }
        int cnt=0,flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                cnt++;
            }
            if(s[i]=='R'){
                flag++;
            }
        }
        if(cnt == n || flag==n){
            cout<<-1<<"\n";
            continue;
        }

        else if(!boolean){
            cout<<0<<"\n";
        }
        else if(boolean){
            cout<<index_left+1<<"\n";
        }
    }

    return 0;
}

