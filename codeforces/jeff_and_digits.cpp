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
//     cin>>n;
//     vector<int>vec(n,0);
//     int sum=0,cnt_five=0,cnt_zero=0;
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//         sum+=vec[i];
//         if(vec[i]==5){
//             cnt_five++;
//         }
//         else{
//             cnt_zero++;
//         }
//     }
//     if(cnt_five<=9 &&cnt_zero==0){
//         cout<<"-1";
//         return 0;
//     }
//     if(cnt_five<9){
//         cout<<"0";
//         return 0;
//     }
//     int final_five_cnt=n-cnt_zero;
//     if(final_five_cnt%9!=0){
//         int x=1,t=0;
//         while(final_five_cnt>x){
//             x=x*9;
//             t+=9;
//         }
//         final_five_cnt = t; 
//     }
//     string str;
//     while (final_five_cnt-- && cnt_zero!=0)
//     {
//         str+='5';
//     }
//     while(cnt_zero--){
//         if(str==""){
//             str+='0';
//             break;
//         }
//         str+='0';
//     }
//     cout<<str;
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int n, t, f(0), z(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
            z++;
        else if (t == 5)
            f++;
    }

    if (z == 0)
        cout << -1 << endl;
    else if (f < 9)
        cout << 0 << endl;
    else
    {
        f -= f % 9;
        for (int i = 0; i < f; i++)
            cout << 5;
        for (int i = 0; i < z; i++) 
            cout << 0;
    }

    return 0;
}