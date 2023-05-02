#include <bits/stdc++.h>
using namespace std;

// Function to remove the anagram string
void removeAnagrams(string arr[], int N)
{
  // vector to store the final result
  vector<string> ans;

  // data structure to keep a mark
  // of the previously occurred string
  unordered_set<string> found;

  for (int i = 0; i < N; i++) {

    string word = arr[i];

    // Sort the characters
    // of the current string
    sort(begin(word), end(word));

    // Check if current string is not
    // present inside the hashmap
    // Then push it in the resultant vector
    // and insert it in the hashmap
    if (found.find(word) == found.end()) {

      ans.push_back(arr[i]);
      found.insert(word);
    }
  }

  // Sort the resultant vector of strings
  sort(begin(ans), end(ans));

  // Print the required array
  for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i] << " ";
  }
}

// Driver code
int main()
{
  string arr[]
    = { "geeks", "keegs",
      "code", "doce" };
  int N = 4;

  removeAnagrams(arr, N);

  return 0;
}