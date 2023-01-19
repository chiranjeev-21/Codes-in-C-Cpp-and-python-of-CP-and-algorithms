#include <iostream>
using namespace std;
int main()
{
    int n,i,d=0;
    cout << "Enter the integer: ";
    cin>>n;
    for (i=1;i<=n;i++) {
        d=d+i;
    }
    cout<<d;
    return 0;
}
