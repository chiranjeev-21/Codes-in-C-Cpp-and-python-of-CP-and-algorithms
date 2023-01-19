#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main(){
   IOS;
   string s;
   cin>>s;
   vector<int>vec(60,0);
   int count_big=0;
   int count_small=0;
   for(int i=0;i<s.length();i++){
    vec[s[i] - 'A']++;
   }
//    for(int i=0;i<vec.size();i++){
//     cout<<vec[i]<<" ";
//    }
//    cout<<"\n";
   for(int i=0;i<26;i++){
    if(vec[i]>0){
        count_big+=vec[i];
    }
   }
   for(int i=26;i<60;i++){
    if(vec[i]>0){
        count_small+=vec[i];
    }
   }
//    cout<<count_big<<"\n";
//    cout<<count_small<<"\n";
   char ch;
   if(count_big<=count_small){
    for (int i = 0; i < s.length(); i++) {
        ch = tolower(s[i]);
        cout << ch;
    }
   }
   else if(count_big > count_small){
    for (int i = 0; i < s.length(); i++) {
        ch = toupper(s[i]);
        cout << ch;
    }
   }
return 0;
}