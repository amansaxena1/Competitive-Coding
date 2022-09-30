#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman(int **arr, int n, int b) {
    double maxi = INT_MIN, ans, temp;
    for (llint i = 0; i < n; i++){
        for (llint j = 0; j < n; j++){
            temp = sqrt((double)(pow((arr[i][0] - arr[j][0]), 2) + (double)pow((arr[i][1] - arr[j][1]), 2)));
            maxi = temp > maxi ? temp : maxi;
        }
    }
    ans = maxi / b;
    cout << ans <<"\n";
}
int main() {
    fast;
    llint t=1, n;
    cin >> t;
    while (t--) {
        int arr[3][2];
        int a = 2, b = 3;
        aman(arr, a, b);
    }
    return 0;
}