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

int helper(int arr[], int n, int k, int i){
    int start;
    if (k > i) start = 0;
    else start = i - k;
 
    int res = 0;
    for (int j = start; j <= start + k && j < n; j++) res += arr[j];

    int curr_sum = res;
    for (int j = start + k + 1; j < n && j <= i + k; j++){
        curr_sum += arr[j] - arr[j - k - 1];
        res = max(res, curr_sum);
    }
    return res;
}


void aman() {
    llint n;
    cin>>n;
    vector<string> v(2*n);
    for(int i=0;i<2*n;i++) cin>>v[i];
    string s;
    cin >> s;
    

}
int main() {
    fast;
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}