#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int lock[n],size[n];
        for(int i=0;i<n;i++)
        {
            cin>>lock[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>size[i];
            while(size[i]--){
            char s;
            cin>>s;
            if(s=='D' && lock[i]==9)
            {
                lock[i]=0;
                continue;
            }
            if(s=='D')
            {
                lock[i]=lock[i]+1;
                continue;
            }
            if(s=='U' && lock[i]==0)
            {
                lock[i]=9;
                continue;
            }
            if(s=='U')
            {
                lock[i]=lock[i]-1;
                continue;
            }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<lock[i]<<" ";
        }
        // cout<<lock[i]<<"  ";
        cout<<"\n";
    }
    return 0;
}