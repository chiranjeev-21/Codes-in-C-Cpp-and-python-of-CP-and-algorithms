#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++) {
        cin>>s[i]>>f[i];
    }
    int a,b;
    a = 0;
    cout <<"Job"<<a+1<<" -> ";
    for (b = 1; b < n; b++)
    {
      if (s[b] >= f[a])
      {
          cout <<"Job"<<b+1<<" -> ";
          a = b;
      }
    }
    return 0;
}