#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int rows,col,i,j,p,count=0,k;
    cin>>rows>>col;
    int available[col],ans[rows]={0},resource[col];
	int max_need[rows][col]={0},allocated[rows][col]={0},remaining_need[rows][col]={0};
    
	bool finish[rows] = {0},found;
 
    for(i=0;i<col;i++)
    cin>>available[i];
 
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        cin>>max_need[i][j];
    }
 
 
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        cin>>allocated[i][j];
    }
 
	for (i = 0 ; i < rows ; i++)
		for (j = 0 ; j < col ; j++)
			remaining_need[i][j] = max_need[i][j] - allocated[i][j];
 
	for (i = 0; i < col ; i++)
		resource[i] = available[i];
 
	while (count < rows)
	{
		found = false;
		for (p = 0; p < rows; p++)
		{
			if (finish[rows] == 0)
			{
				for (j = 0; j < col; j++)
					if (remaining_need[rows][j] > resource[j])
						break;
				if (j == col)
				{
					for (k = 0 ; k < col ; k++)
						resource[k] += allocated[rows][k];
					ans[count++] = rows;
					finish[rows] = 1;
					found = true;
				}
			}
		}
		if (!found)
			cout << "System is not in safe state";
	}

	
	cout << "System is in safe state.\nSafe sequence is: ";
	for (i = 0; i < rows ; i++)
		cout << ans[i] << " ";
	return 0;
}