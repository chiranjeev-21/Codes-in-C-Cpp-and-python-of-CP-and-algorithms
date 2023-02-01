#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int p;
    cin>>p;
    while(p--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i< n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
 
        if(a[0] == a[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
 
        cout<<a[n-1]<<" ";
        
        for(int i = 0; i< n-1; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}