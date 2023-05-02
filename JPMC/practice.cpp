#include<bits/stdc++.h>
using namespace std;


int fn(vector<int>arr,int k){
    int n=arr.size();
    if(k==0||k>n) return 0;
    int ans=0;
    vector<int> preCompute(n,-1);
    int i=0;
    int curr=0;
    while(i<n-1){
        if(arr[i+1]>arr[i]) curr++;
        else{
            preCompute[i-curr]=curr+1;
            curr=0;
        }
        i++;
    }
    preCompute[i-curr]=curr+1;
    for(int i=0;i<n;i++){
        if(preCompute[i]!=-1&&preCompute[i]>=k) ans+=preCompute[i]-k+1;
    }
	return ans;
}

int main(){
    vector<int>arr ={1,2,3,4,5};
    int k=2;
    cout<<fn(arr,k);
    return 0;
}