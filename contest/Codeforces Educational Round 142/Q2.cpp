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
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        int a_score = 0, b_score = 0;
        a_score += a1;
        b_score += a1;
        int cnt = a1;
        if(a1==0){
            cout<<1<<"\n";
        }
        else if (a2 == 0 && a3 == 0 && a4 == 0)
        {
            cout << cnt << "\n";
        }
        else if(a2==0 &&a3==0 &&a4>0){
            cout<<cnt*2+1<<"\n";
        }
        else if(a2<a3)
        {
            a_score+=a2;
            b_score-=a2;
            // cout<<a_score<<" "<<b_score<<" ";
            cnt+=a2;
            a2=0;
            // cout<<cnt<<" ";
            while(a3 >0 && a_score>0){
                b_score++;
                a_score--;
                cnt++;
                a3--;
                // cout<<cnt<<" ";
            }
            cout<<cnt+1<<"\n";
        }
        else if(a3<a2){
            a_score+=a3;
            b_score-=a3;
            // cout<<a_score<<" "<<b_score<<" ";
            cnt+=a3;
            a3=0;
            // cout<<cnt<<" ";
            while(a2 >0 && a_score>0){
                b_score++;
                a_score--;
                cnt++;
                a2--;
                // cout<<cnt<<" ";
            }
            cout<<cnt+1<<"\n";
        }
    }

    return 0;
}