#include <iostream>
#include <math.h>
#include<vector>
 
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
    int n;
    cin>>n;
  	vector<int>vec(n,0);
  	int sum=0;
    for(int i=0;i<n;i++){
      	cin>>vec[i];
      if(vec[i]>10){
        	sum+=vec[i]-10;
      }
	}
  	cout<<sum;
    
    return 0;
}