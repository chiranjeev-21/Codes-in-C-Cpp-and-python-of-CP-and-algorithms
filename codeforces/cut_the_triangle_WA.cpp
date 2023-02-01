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
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int s1,s2,s3;
        vector<int>vec;
        s1=(y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
        s2=(y2-y3)*(y2-y3) + (x2-x3)*(x2-x3);
        s3=(y1-y3)*(y1-y3) + (x1-x3)*(x1-x3);

        vec.push_back(s1);
        vec.push_back(s2);
        vec.push_back(s3);
        // cout<<s1<<s2<<s3;
        sort(vec.begin(),vec.end());
        // for(int i=0;i<3;i++){
        //     cout<<vec[i]<<" ";
        // }
        if(vec[0]+vec[1] == vec[2]){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }

    return 0;
}