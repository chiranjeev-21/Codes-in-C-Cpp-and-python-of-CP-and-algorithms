#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int dp[500001];  // Tracks best result for transforming values into c
int a[500001];   // Input array
int main(){
	int t; cin >> t;
	while(t--){
		int n, c; 
		cin >> n >> c;  // Read size and target value
		for (int i = 0; i < n; i++) 
			cin >> a[i];  // Read input array

		int tot_cnt_c = 0;  // Total count of elements equal to c
		for (int i = 0; i < n; i++) 
			tot_cnt_c += (a[i] == c);

		int mx = tot_cnt_c;  // Initialize max result to current count of c
		int running_cnt_c = 0;  // Running count of c elements seen so far

		for (int i = 0; i < n; i++) {
			if (a[i] == c) {
				running_cnt_c++;  // Increment count if the current element is c
			} else {
				// For a[i] == d (d != c), update dp[d]
				// Start a new sequence or extend an existing one
				dp[a[i]] = max(running_cnt_c + 1, dp[a[i]] + 1);

				// Calculate remaining c's and update the maximum
				int num_c_after_i = tot_cnt_c - running_cnt_c;
				mx = max(mx, dp[a[i]] + num_c_after_i);
			}
		}

		cout << mx << '\n';  // Output the maximum possible count
	}	
	return 0;
}