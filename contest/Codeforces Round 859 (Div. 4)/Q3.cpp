#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
// vector<int>vec[26] = {0};
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
        string s;
        cin>>s;
        unordered_map<int,int>mp;
        vector<vector<int>> indices(26);
        for (int i = 0; i < s.length(); i++) {
            int index = s[i] - 'a';
            indices[index].push_back(i);
        }
        bool var = false;
        for (int i = 0; i < 26; i++) {
            if(indices[i].size()<=1){
                continue;
            }
            if (indices[i].size() > 1) {
                bool boolean;
                if(indices[i][0]%2==0){
                    boolean =true;
                }
                else{
                    boolean=false;
                }

                for (int j = 0; j < indices[i].size(); j++) {
                    if(boolean){
                        if(indices[i][j]%2!=0){
                            var=true;
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    else if(!boolean){
                        if(indices[i][j]%2==0){
                            var=true;
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    // cout << indices[i][j] << " ";
                }
                if(var){
                    break;
                }
                // cout << "\n";
            }
        }
        if(var){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

 
    }
    return 0;
}

