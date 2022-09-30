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
    string s;
    cin >> s;
    llint maxi = 1, ans=1;
    for (llint i = 0; i < s.length();i++){
        if(s[i] == s[i+1])
            maxi++;
        else{
            ans = max(ans, maxi);
            maxi = 1;
        }
    }
    cout << ans;
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}