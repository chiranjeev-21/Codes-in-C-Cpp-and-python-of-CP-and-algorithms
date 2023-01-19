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
    int n,m;
    cin>>n>>m;
    vector<int>vec(m,0),v(m,0);
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    int copy_n=n,n_dup=n;
    v=vec;
    // sort(vec.begin(),vec.end());
    int MinSum=0,MaxSum=0,i=0;
    priority_queue<int, vector<int>, greater<int> > pq1;
    for(int i=0;i<m;i++){
        pq1.push(vec[i]);
    }
    while(copy_n--){
        int temp=pq1.top();
        MinSum+=temp;
        if(temp-1==0){
            pq1.pop();
            continue;
        }
        pq1.pop();
        pq1.push(temp-1);
    }
    // cout<<MinSum;

    priority_queue<int>pq;
    for(int i=0;i<m;i++){
        pq.push(v[i]);
    }

    // while(pq.empty()==false){
    //   cout<<pq.top()<<" ";
    //   pq.pop();
    // }
    // cout<<n_dup;

    while(n_dup--){
        int temp=pq.top();
        MaxSum+=temp;
        pq.pop();
        pq.push(temp-1);
    }
    cout<<MaxSum<<" "<<MinSum;
    return 0;
}