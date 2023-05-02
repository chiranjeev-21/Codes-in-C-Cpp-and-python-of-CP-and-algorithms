#include<bits/stdc++.h>
using namespace std;

vector<string> checkAlmostEquivalent(vector<string>s, vector<string>t) {
    int n=s.size();
    vector<string>ans;
    for(int i=0;i<n;i++){
        if(s[i].length()==t[i].length()){
            int a1[26]={0};
            int a2[26]={0};
            for(char x : s[i]){
                a1[x -'a']++;
            }
            for(char x: t[i]){
                a2[x - 'a']++;
            }
            bool flag=true;
            for(int i=0;i<26;i++){
                if(abs(a1[i]-a2[i])>3){
                    ans.push_back("NO");
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    return ans;
}

int main(){
    vector<string>s ={"aabaab","aaaaabb"};
    vector<string>t ={"bbabbc","abb"};
    vector<string>ans = checkAlmostEquivalent(s,t);
    for(auto i:ans){
        cout<<i<<" ";
    }
}