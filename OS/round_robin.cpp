#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q = 2, n, i, sum = 0, cycle = 0, k, resp;
    float s1 = 0, s2 = 0;
    cout << "Enter no. of processes: ";
    cin >> n;
    vector<int> pro(n), burst(n), wait(n, 0), tat(n, 0), b(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter burst time of processes ";
        cin >> burst[i];
        b[i] = burst[i];
        sum += burst[i];
    }
    i = 0;
    while (1)
    {
        if (cycle >= 1)
            q = 3;
        resp = min(q, burst[i]);
        burst[i] -= resp;
        for (k = 0; k < n; k++)
        {
            if (k != i)
                if (burst[k] > 0)
                    wait[i] += resp;
        }
        i = (i + 1) % n;
        if (i == 0)
            cycle++;
        sum -= resp;
        if (sum <= 0)
            break;
    }
    for (i = 0; i < n; i++)
    {
        s1 += wait[i];
    }
    for(i=0;i<n;i++)
    {
        s2 += wait[i] + b[i];
    }
    for(int i=0;i<n;i++)
    {
        tat[i]=wait[i] + b[i];
    }
    for (auto x : tat)
        cout << x << " ";
    cout << "\n";
    for (auto x : wait)
        cout << x << " ";
    cout << "\n";
    cout << "Average waiting time: " << float(s1 / n) << "\nAverage turnaround time:" << float(s2 / n) << "\nNumber of cycles : " << cycle;
}