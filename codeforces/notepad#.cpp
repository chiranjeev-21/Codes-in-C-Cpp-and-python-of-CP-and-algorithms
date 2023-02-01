#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, flag = 0;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                if (s[i] == s[j] && s[i + 1] == s[j + 1])
                {
                    flag = 1;
                    cout << "yes" << endl;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "no" << endl;
        }
        flag = 0;
    }
}