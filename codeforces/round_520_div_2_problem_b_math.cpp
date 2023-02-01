#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "1 0" << endl;
    return 0;
  }
  long long result= 1;
  vector<int> p(n);
  for (int i = 2; i < n + 1; i++) {
    if (n % i == 0) {
      result*= i;
      while (n % i == 0) {
        p[i]++;
        n /= i;
      }
    }
  }
  int mp = 1;
  for (int i = 0; i < p.size(); i++) {
    mp = max(mp, p[i]);
  }
  bool f = (mp & (mp - 1)) == 0;   //check if mp(maximum power of prime factor) is a power of two or not
  for (int i = 0; i < p.size(); i++) {
    if (p[i] > 0 && p[i] != mp) {
      f = false;
      break;
    }
  }
  int stp = ceil(log2(mp));
  if (!f) {
    stp++;
  }
  cout << result<< " " << stp << endl;

}

// 2^3 * 3^2 * 18
