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

llint helper(vector<llint> arr, llint k, llint i){
    llint n = arr.size();
    llint start;
    if (k > i) start = 0;
    else start = i - k;
 
    llint res = 0;
    for (llint j = start; j <= start + k && j < n; j++) res += arr[j];

    llint curr_sum = res;
    for (int j = start + k + 1; j < n && j <= i + k; j++){
        curr_sum += arr[j] - arr[j - k - 1];
        res = max(res, curr_sum);
    }
    return res;
}

void aman() {
    llint n, k;
    cin >> n >> k;
    vector<llint> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    llint ans = helper(v, k, 0);
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