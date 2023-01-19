#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;


int main(){
    IOS;
    int t;
    cin>>t;
    while (t--)
    {
        int xk, yk, x1, y1, x2, y2;
        cin >> xk >> yk >> x1 >> y1 >> x2 >> y2;
        if (!(xk == 1 || xk == 8 || yk == 1 || yk == 8))
        {
            cout<<"no"<<"\n";
        }
        else
        {
            if (xk == 1)
            {
                if ((x1 == 2 || x2 == 2) && y1 != y2)
                {
                    if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1)
                    {
                        cout<<"no"<<"\n";
                    }
                }
            }
            else if (xk == 8)
            {
                if ((x1 == 7 || x2 == 7) && y1 != y2)
                {
                    if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1)
                    {
                        cout<<"no"<<"\n";
                    }
                }
            }
            if (yk == 1)
            {
                if ((y1 == 2 || y2 == 2) && x1 != x2)
                {
                    if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1)
                    {
                        cout<<"no"<<"\n";
                    }
                }
            }
            else if (yk == 8)
            {
                if ((y1 == 7 || y2 == 7) && x1 != x2)
                {
                    if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1)
                    {
                        cout<<"no"<<"\n";
                    }
                }
            }
        }
        
    }
    
    return 0;
}