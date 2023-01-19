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

// string operator * (string a, unsigned int b) {
//     string output = "";
//     while (b--) {
//         output += a;
//     }
//     return output;
// }


// int main()
// {
//     IOS;
//     int t;
//     cin >> t;
//     string s;
//     cin>>s;
//     unordered_map<char,int>mp;
//     for(int i=0;i<s.length();i++){
//         mp[s[i]]++;
//     }
//     int cnt=0;
//     for(auto i:mp){
//         if(i.second==t){
//             continue;
//         }
//         else{
//             cnt+=1;
//             break;
//         }
//     }
//     vector<char>vec;
//     for(auto i:mp){
//         vec.push_back(i.first);
//     }
//     // for(int i=0;i<vec.size();i++){
//     //     cout<<vec[i];
//     // }
//     string st;
//     for(int i=0;i<vec.size();i++){
//         st+=vec[i];
//     }
//     // string str(t,st);
    
//     if(cnt==0) cout<<st*t;
//     else cout<<-1;
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k,count=0;
	char ch;
	cin>>k;
	string s;
	cin>>s;
	int l=s.size();
	sort(s.begin(),s.begin()+s.size());
	for(int i=0;i<s.size();i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}

	return 0;
}