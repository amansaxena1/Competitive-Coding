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
void aman() {
    llint n;
    cin>>n;
    vector<llint> ans(n);
    llint l = 0, r = n - 1;
    for (llint i = 0; i < n;i++)
    {
        if(i%2)
            ans[l++] = n - i;
        else
            ans[r--] = n - i;
    }
    for(auto i:ans) cout<<i<<" ";
    cout << "\n";
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