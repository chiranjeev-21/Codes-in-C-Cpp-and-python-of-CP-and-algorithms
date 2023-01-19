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
    vector<vector<char>>vec(4,vector<char>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>vec[i][j];
        }
    }
    int cc=0;
    for(int k=0;k<=2;k++){
        for(int l=0;l<=2;l++){
            int cnt=0,flag=0;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    if(vec[i+k][j+l]=='#'){
                        // cout<<"###"<<" ";
                        cnt++;
                    }
                    else if(vec[i+k][j+l]=='.'){
                        //  cout<<"..."<<" ";
                        flag++;
                    }
                }
            }
            if(cnt>=3){
                // cout<<cnt<<"\n";
                cc++;
                break;
            }
            else if(flag>=3){
                // cout<<cnt<<"\n";
                cc++;
                break;
            }
        }
        
    }
    if(cc>0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO";
    }
    return 0;
}