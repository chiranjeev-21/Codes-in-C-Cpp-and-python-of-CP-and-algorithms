#include<bits/stdc++.h>
using namespace std;

int count_pairs(int low, int high) {   
    int max_power_3 = log(high) / log(3);
    int max_power_5 = log(high) / log(5);
    int count = 0;
    for (int x = 0; x <= max_power_3; x++)
    {
        for (int y = 0; y <= max_power_5; y++)
        {
            int val = pow(3, x) * pow(5, y);
            if (low <= val && val <= high)
            {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int low=0,high=0;
    cin>>low>>high;
    cout<<count_pairs(low,high);
}