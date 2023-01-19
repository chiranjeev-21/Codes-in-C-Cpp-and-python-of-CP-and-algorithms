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
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int n=s.length();
    int abscissa = sx - ex;
    int ordinate = sy - ey;
    cout<<abscissa<<" "<<ordinate<<"\n";
    if(abscissa > 0 && ordinate > 0){
        int xcount=0,ycount=0,bb=0,k=0;
        for(int i=n-1;i>=0;i--){
            if((s[i]=='S'&& (bb==0))){
                k=i;
                ycount++;
                bb++;
            }
            if((s[i]=='W'&& (bb==0))){
                k=i;
                xcount++;
                bb++;
            }
            else if(s[i]=='S'){
                ycount++;
            }
            else if(s[i]=='W'){
                xcount++;
            }
        }
        cout<<xcount<<" "<<ycount<<"\n";
        if(xcount>=abscissa && ycount >= ordinate){
            cout<<k;
        }
    }

    return 0;
}