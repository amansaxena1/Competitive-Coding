#include <bits/stdc++.h>
using namespace std;
int fun( int ind, int sum, int* A, int N, vector<vector<int> >& dp){
	if (ind == N) return 1;
	if (dp[ind][sum] != -1) return dp[ind][sum];
	if (A[ind] <= sum) dp[ind][sum] = fun(ind + 1, sum, A, N, dp) + fun(ind + 1, sum - A[ind], A, N, dp);
	else dp[ind][sum] = fun( ind + 1, sum, A, N, dp);
	return dp[ind][sum];
}

int funct(int* A, int N, int X){
	vector<vector<int> > dp(N, vector<int>(X + 1, -1));
	return fun(0, X, A, N, dp) - 1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++) cin >> arr[i];
    
    int X;
    cin >> X;

	int N = sizeof(arr) / sizeof(arr[0]);
	cout << funct(arr, N, X);
	return 0;
}
