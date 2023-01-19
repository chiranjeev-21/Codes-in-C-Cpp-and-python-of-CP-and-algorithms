#include<iostream>
using namespace std;
int main()
{
    int d,b=0,p=1,r;
    cout<<"Enter the decimal number ";
    cin>>d;
    cout<<"The binary equivalent of decimal number "<<d;
    while(d!=0)
    {
        r=d%2;
        d=d/2;
        b=b+r*p;
        p=p*10;
    }
    cout<<b;
    return 0;
}
