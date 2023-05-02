#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
  int maxVisitors = -1;
        int recordBreakingDays = 0;
        for (int i = 0; i < visitors.size(); i++) {
            if (visitors[i] > maxVisitors && (i == numberOfDays - 1 || visitors[i] > visitors[i + 1]))
                recordBreakingDays++;
            maxVisitors = max(maxVisitors, visitors[i]);
        }
        return recordBreakingDays;
}
bool my_compare(string a, string b)
{
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
    else
        return a < b;
}

int Solution(vector<string> &color, vector<int> &durabality, vector<int> &unique_identifier)
{
  if(color.size()==1 && durabality.size()==1 && unique_identifier.size()==1){
    return 1;
  }
  vector<string>color_copy=color;
  sort(color_copy.begin(), color_copy.end(), my_compare);
  // for(int i=0;i<color.size();i++){
  //   cout<<color[i]<<" ";
  // }
  // cout<<"\n";
  
  return 0;
}
int main()
{
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc)
  {
    int N;
    cin >> N;
    // vector<int> V(N);
    // for (int i = 0; i < N; ++i) {
    //   cin >> V[i];
    // }
    vector<string> color;
    vector<int> durabality;
    vector<int> unique_identifier;
    for (int i = 0; i < N; i++)
    {
      string s;
      cin >> s;
      color.push_back(s);
      int t;
      cin >> t;
      durabality.push_back(t);
      int kk;
      cin >> kk;
      unique_identifier.push_back(kk);
    }
    cout << "Case #" << tc << ": " << Solution(color, durabality, unique_identifier) << "\n";
  }
  return 0;
}
