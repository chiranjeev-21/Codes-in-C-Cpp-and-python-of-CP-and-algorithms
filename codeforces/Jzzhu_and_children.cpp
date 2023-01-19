// #include <bits/stdc++.h>

// using namespace std;
// // Some typedef's
// typedef long long ll;
// typedef unsigned long long ull;
// const int inf = 1e9 + 7;
// const double eps = 1e-6;
// const double pi = 1.00 * acos(-1.00);
// #define IOS                  \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);
// typedef long long ll;
// int main()
// {
//     IOS;
//     int n,m;
//     cin>>n>>m;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     bool boolean =true;
//     while(boolean){
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             vec[i]-=m;
//         }
//         for(int i=0;i<n;i++){
//             if(vec[i]<=3){
//                 cnt++;
//             }
//         }
//         if(cnt==n){
//             boolean=false;
//         }
//         // cout<<boolean;
//         // for(int i=0;i<n;i++){
//         //     cout<<vec[i]<<" ";
//         //}
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(vec[i]<0){
//             count++;
//         }
//     }
//     if(count==n){
//         for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }

//         cout<<n<<"\n";
//     }
//     else{
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     int res=0;

//     for(int i=n-1;i>=0;i--){
//         if(vec[i]>0){
//             res=max(res,i+1);
//         }
//     }
//     cout<<res;
//     }
//     return 0;
// }
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
    int n,m;
    cin >> n>>m;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        if(vec[i]<m){
            vec[i] = 1;
        }
        else{
            vec[i]= ceil((float)vec[i]/(float)m);
        }
    }
    int max=0,max_index=0;
    // for(int i=0;i<n;i++){
    //     cout<<vec[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        if(vec[i]>=max){
            max=vec[i];
            max_index=i+1;
        }
    }
    cout<<max_index;

    return 0;
}