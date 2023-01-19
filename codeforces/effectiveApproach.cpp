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
//     int n;
//     cin >> n;
//     vector<int> vec(0, n);
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         vec.push_back(val);
//     }
//     int m, res = 0, res1 = 0;
//     cin >> m;
//     int cnt_forward = 0, cnt_back = 0;
//     vector<int> v;
//     for (int i = 0; i < m; i++)
//     {
//         int t;
//         cin >> t;
//         v.push_back(t);
//     }
//     for (int k = 0; k < m; k++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (vec[i] == v[k])
//             {
//                 cnt_forward++;
//                 break;
//             }
//             else
//             {
//                 cnt_forward++;
//                 continue;
//             }
//         }
//         // cout<<"xxxxxxxxxxxxxxxxxxxxxxxxx"<<" "<<cnt_forward<<"\n";
//         res += cnt_forward;
//         for (int j = n - 1; j >= 0; j--)
//         {
//             if (vec[j] == v[k])
//             {
//                 cnt_back++;
//                 break;
//             }
//             else
//             {
//                 cnt_back++;
//                 continue;
//             }
//         }
//         // cout<<"xxxxxxxxxxxxxxxxxxxxxxxxx"<<" "<<cnt_back<<"\n";
//     }

//     cout << cnt_forward << " " << cnt_back;
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
vector<int>pos(0,100001);  
int main() {
    int n;
    ll sum1 = 0, sum2 = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int num;
        cin>>num;
        pos[num] = i + 1;
    }   
    int m;
    cin>>m;  
    while(m--){
        int q;
        cin>>q;
        sum1 += pos[q];
        sum2 += n - pos[q] + 1;             
    }
 
    cout<<sum1<<" "<<sum2;
 
    return 0;
}