#include<bits/stdc++.h>
using namespace std;

int printUnique(int l, int r)
{
    int cnt=0;
	for (int i=l ; i<=r ; i++)
	{
		int num = i;
		bool visited[10] = {false};
		while (num)
		{
			if (visited[num % 10])
				break;

			visited[num%10] = true;

			num = num/10;
		}
		if (num == 0)
            cnt++;
	}
    return cnt;
}

int main()
{
	int l = 80, r = 120;
	cout<<printUnique(l, r);
	return 0;
}
