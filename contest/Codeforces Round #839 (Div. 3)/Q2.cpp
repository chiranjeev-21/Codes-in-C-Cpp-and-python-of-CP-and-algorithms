#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<vector<int>> matrix(2, vector<int>(2, 0));
        matrix[0][0] = a;
        matrix[0][1] = b;
        matrix[1][0] = c;
        matrix[1][1] = d;
        if (a < b && c < d && a < c && b < d)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            int n = 4;
            int tt = 4;
            while (tt--)
            {
                int cc;
                cc = matrix[0][0];
                matrix[0][0] = matrix[1][0];
                matrix[1][0] = matrix[1][1];
                matrix[1][1] = matrix[0][1];
                matrix[0][1] = cc;

                // for (int i = 0; i < 2; i++)
                // {
                //     for (int j = 0; j < 2; j++)
                //     {
                //         cout << matrix[i][j] << " ";
                //     }
                // }
                // cout << "\n";
                if (matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1] && matrix[0][0] < matrix[1][0] && matrix[0][1] < matrix[1][1])
                {
                    cout << "YES"
                         << "\n";
                    break;
                }
            }
            if (tt <= 0)
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
        return 0;
    }