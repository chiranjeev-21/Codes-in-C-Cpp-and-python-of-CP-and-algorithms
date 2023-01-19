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
        vector<vector<char>> vec(8, vector<char> (8,'.'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>vec[i][j];
            }
        }
        // for(int i=0;i<8;i++){
        //     for(int j=0;j<8;j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n\n";
        string str;
        for(int i=0;i<8;i++){
            int index=i;
            int cnt=0;
            for(int j=0;j<8;j++){
                if(vec[index][j]=='R'){
                    cnt++;
                }
            }
            if(cnt==8){
                str+='R';
            }
        }
        vector<vector<char>> v(8, vector<char> (8,'.'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                v[i][j] = vec[j][i];
            }
        }
        for(int i=0;i<8;i++){
            int index=i;
            int count=0;
            for(int j=0;j<8;j++){
                if(v[index][j]=='B'){
                    count++;
                }
            }
            if(count==8){
                str+='B';
            }
        }
        cout<<str[0]<<"\n";
      
    }

    return 0;
}