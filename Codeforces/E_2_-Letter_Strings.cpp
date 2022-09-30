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
    cin >> n;
    string s;
    vector<string> v(n);
    for (llint i = 0; i < n; i++) {
        cin >> s;
        v[i] = s;
    }
    map<string, llint> mp, same;
    for (auto s : v){
        same[s]++;
        for (llint i = 0; i < 2; i++){
            string t = s.substr(0, i) + "//" + s.substr(i + 1);
            mp[t]++;
        }
    }
    llint ans = 0;
    for (auto i : mp)
        ans += (i.second * (i.second - 1)) / 2;

    llint ans2 = 0;
    for (auto i : same)
        ans2 += (i.second * (i.second - 1)) / 2;

    ans = ans - (ans2*2);
    cout << ans<<"\n";
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