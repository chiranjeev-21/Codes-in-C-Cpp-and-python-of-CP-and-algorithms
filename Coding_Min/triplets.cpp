#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>triplets(int Sum, vector<int> arr){
    int n=arr.size();
    vector<vector<int>> vec;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int second_sum=Sum-i;
        for(int j=i+1;j<n;j++){
            int start=j,end=n;
            if(arr[start]+arr[end] > second_sum){
                end-=1;
            }
            else if(arr[start]+arr[end] < second_sum){
                start+=1;
            }
            else if(arr[start]+arr[end] == second_sum){
                vec.push_back(arr[start]);
                vec.push_back(arr[end]);
                vec.push_back(arr[i]);
            }

        }
    }
}



int main(){
   vector<int> arr{1,2,3,4,5,6,10,9,17,14};
   int S= 18;

   auto result=triplets(S,arr);
    return 0;
}