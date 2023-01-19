#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int P,R,i,j,p,flag=0,k;
    cin>>P>>R;
    int available[R],ans[P]={0},resource[R];
	int max_array[P][R]={0},allocation_array[P][R]={0},remaining_array[P][R]={0};
	bool end_process[P] = {0},istrue;

    for(i=0;i<R;i++)
    cin>>available[i];

    for(i=0;i<P;i++)
    {
        for(j=0;j<R;j++)
        cin>>max_array[i][j];
    }
 
    for(i=0;i<P;i++)
    {
        for(j=0;j<R;j++)
        cin>>allocation_array[i][j];
    }
 
	for (i = 0 ; i < P ; i++)
		for (j = 0 ; j < R ; j++)
			remaining_array[i][j] = max_array[i][j] - allocation_array[i][j];
 
	for (i = 0; i < R ; i++)
    {
		resource[i] = available[i];
    }
 
	while (flag < P)
	{
		istrue = false;
		for (p = 0; p < P; p++)
		{
			if (end_process[p] == 0)
			{
				for (j = 0; j < R; j++)
					if (remaining_array[p][j] > resource[j])
						break;
				if (j == R)
				{
					for (k = 0 ; k < R ; k++)
						resource[k] += allocation_array[p][k];
					ans[flag++] = p;
					end_process[p] = 1;
					istrue = true;
				}
			}
		}
		if (!istrue)
			cout << "System is not in safe state";
	}
    cout<<"Remaining need is :"<<"\n";
    for(int i=0;i<P;i++)
    {
        for(int j=0;j<R;j++)
        {
            cout<<remaining_array[i][j]<<"\t";
        }
        cout<<"\n";
    }
	cout << "System is in safe state with sequence: ";
	for (i = 0; i < P ; i++)
		cout << ans[i] << " ";
	return 0;
}