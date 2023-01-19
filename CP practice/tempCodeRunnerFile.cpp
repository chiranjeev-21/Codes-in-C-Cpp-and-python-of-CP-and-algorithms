#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
  int maxVisitors = -1;
        int recordBreakingDays = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxVisitors && (i == n - 1 || arr[i] > arr[i + 1]))
                recordBreakingDays++;
            maxVisitors = max(maxVisitors, arr[i]);
        }
        return recordBreakingDays;
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}
