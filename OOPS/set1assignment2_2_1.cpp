#include <iostream>
using namespace std;
int value=100;
int main ()
{
	int value=200;
	cout<<"GLOBAL VALUE : "<<::value<<endl;
	cout<<"LOCAL VALUE : "<<value<<endl;
	return 0;
}