#include<iostream>
using namespace std;
int main()
{
	int num1 = 1, num2 = 300,count;
   cout<<"Prime numbers between "<<num1<<" and "<<num2<<": ";
   while(num1<num2)
    {
        count=0;
        for(int i=2;i<=num1/2;i++)
        {
            if(num1%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
            cout<<num1<< " ";
        num1++;
    }
	return 0;
}
