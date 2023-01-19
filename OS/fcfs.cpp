#include <bits/stdc++.h>
using namespace std;
+

    int
    main()
{
    int n, sum = 0, sum_turn = 0;
    cout << "Enter the number of processes and their cpu burst time"
         << "\n";
    cin >> n;
    int a[n], w[n], turn[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    w[0] = 0;
    for (int i = 1; i < n; i++)
    {
        w[i] = a[i - 1] + w[i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        sum += w[i];
    }
    cout << "Waiting time for each process is  ->    ";
    for (int i = 0; i < n; i++)
    {
        cout << w[i] << "  -> " << i + 1 << "   ";
    }
    cout << "Average waiting time is  ->  " << float(sum / n) << "\n"
                                                                 "\n";
    for (int i = 0; i < n; i++)
    {
        turn[i] = a[i] + w[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum_turn += turn[i];
    }
    cout << "Turn-around time for each process is  ->    ";
    for (int i = 0; i < n; i++)
    {
        cout << turn[i] << "  ->  " << i + 1 << "   ";
    }
    cout << "Average waiting time is  ->  " << float(sum_turn / n) << "\n"
                                                                      "\n";

    return 0;
}