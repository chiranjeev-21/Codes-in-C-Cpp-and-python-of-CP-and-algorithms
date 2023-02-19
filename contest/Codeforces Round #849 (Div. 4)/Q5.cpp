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
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>vec(n,0),mod(n-1,0);
//         int negative=0;
//         for(int i=0;i<n;i++){
//             cin>>vec[i];
//         }
//         int temp=vec[n-1];
//         for(int i=0;i<n-1;i++){
//             if(vec[i]<0){
//                 negative++;
//             }
//             mod[i]=abs(vec[i]);
//         }
//         if(vec[n-1]<0) negative++;
//         if(negative%2!=0){
//             negative=1;
//         }
//         else{
//             negative=0;
//         }
//         sort(mod.begin(),mod.end());
//         int sum=0;
//         if(negative==1){
//             mod[0]*=(-1);
//         }
//         // else if(negative==2){
//         //     mod[0]*=(-1);
//         //     mod[1]*=(-1);
//         // }
//         for(int i=0;i<n-1;i++){
//             sum+=mod[i];
//         }
//         cout<<sum+temp<<"\n";

        
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n,0),mod(n,0);
        int negative=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]<0){
                negative++;
            }
            mod[i]=abs(vec[i]);
        }
        if(negative%2!=0){
            negative=1;
        }
        else{
            negative=0;
        }
        if(negative==1 && vec[n-1]<0){
            mod[n-1]*=(-1);
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=mod[i];
            }
            cout<<sum<<"\n";
        }
        else{
            sort(mod.begin(),mod.end());
        int sum=0;
        if(negative==1){
            mod[0]*=(-1);
        }
        // else if(negative==2){
        //     mod[0]*=(-1);
        //     mod[1]*=(-1);
        // }
        for(int i=0;i<n;i++){
            sum+=mod[i];
        }
        cout<<sum<<"\n";
        }
        

        
    }

    return 0;
}