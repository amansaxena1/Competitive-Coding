/*       ¯ಠ_ಠ_/¯        */
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
    llint n, k;
    cin >> n >> k;
    vector<pair<llint, llint>> v(n);
    for (llint i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    int ans = 1;
    for (int i = 1; i < n; i++){
        if (v[i - 1].second + 1 != v[i].second){
            ans++;
        }
    }
    if(ans<=k){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
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