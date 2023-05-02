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
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        // int t=d+1,tmp=d-1;
        // char s1=to_string(t);
        // char s2=to_string(tmp);
        // size_t found = s.find(s1);
        // size_t found2 = s.find(s2);
        // if()
        size_t found = s.find(to_string(d));
        if (found != string::npos){
            // cout<<"34223    ";
            string str=s.substr(0,found);
            string str1=to_string(d);
            string str2=s.substr(found,n-found-1);
            string ans=str+str1+str2;
            cout<<ans<<"\n";
        }
        else{
            //  cout<<"3424r3423";
            string str=to_string(d);
            string ans=str+s;
            cout<<ans<<"\n";
        }
        // int n=s.length();
        // for(int i=0;i<n;i++){
        //     if(s[i]==to_string(d)){

        //     }
        // }
        // string digit = to_string(d);

        // ll max_num = -1;
        
        // string new_num_str = digit + s;
        // max_num = max(max_num, stoll(new_num_str,nullptr,10));
        
        // // insert additional digit at the end
        // new_num_str = s + digit;
        // max_num = max(max_num, stoll(new_num_str,nullptr,10));
        
        // // insert additional digit at all other positions
        // for (int i = 1; i < n; i++) {
        //     new_num_str = s.substr(0, i) + digit + s.substr(i);
        //     max_num = max(max_num, stoll(new_num_str,nullptr,10));
        // }
        // cout<<max_num<<"\n";

    }

    return 0;
}