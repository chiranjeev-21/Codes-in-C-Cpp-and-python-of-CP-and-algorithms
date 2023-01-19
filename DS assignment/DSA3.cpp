#include <iostream>
using namespace std;
 

int main()
{
 
    int i,j;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            sum = sum + arr[i][j];
        }
        cout<< "Sum of the row "<< i << " = " << sum<<"\n";
    
            sum = 0;
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            sum = sum + arr[j][i];
        }
        cout<< "Sum of the column "<< i << " = " << sum<<"\n";

        sum = 0;
    }
    return 0;
}