// C++ implementation to remove
// all the anagram strings
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
		= { "code", "ecod",
			"doce", "framer", "frame" };
	int N = 5;

	removeAnagrams(arr, N);

	return 0;
}




int distinctIds(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    priority_queue<int, vector<int>, greater<int> > pq;

    for (auto it : mp) {
        pq.push(it.second);
    }
    while (k > 0) {
        k -= pq.top();
        if (k >= 0)
            pq.pop();
    }

    return pq.size();
}

factors of 3,5 , lottery -> jd
highly profitable, game winner ->cj
mera same, aur almost equivalent -> maiti
flips, array reduction -> mahajan
