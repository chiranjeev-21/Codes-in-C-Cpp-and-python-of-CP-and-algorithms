#include<bits/stdc++.h>
using namespace std;

// 		t = 0 = friend(need help), t = 1 = ours;
#define ll long long int
int arr[200005], n;
map<pair<int, int>, int> dp;

int f(int cur_ind, bool turn){
	if(cur_ind >= n) return 0;
	if(dp[{cur_ind, turn}] != 1e5) return dp[{cur_ind, turn}];
	int a = 1e5, b = 1e5;
	if(turn) a = f(cur_ind + 1, !turn), b = f(cur_ind + 2, !turn);
	else{
		a = f(cur_ind + 1, !turn) + (arr[cur_ind] == 1);
		if(cur_ind + 1 < n) b = f(cur_ind + 2, !turn) + (arr[cur_ind] == 1) + (arr[cur_ind + 1] == 1);
	}
	dp[{cur_ind, turn}] = min(a, b);
	return dp[{cur_ind, turn}];
}

int main(){
	
	int t; cin >> t;
	
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> arr[i];
		for(int i = 0; i <= n + 2; i++) dp[{i, 0}] = 1e5, dp[{i, 1}] = 1e5;
		
		cout << f(0, 0) << endl;
	}
	
	return 0;
}