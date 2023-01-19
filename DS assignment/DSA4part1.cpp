#include <iostream>
using namespace std;

int main()
{
	int i,j,a[1000][1000],b[1000][1000];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[i][j]=a[j][i];
		}
	}
	cout<<"transpose of matrix is:"<<"\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}