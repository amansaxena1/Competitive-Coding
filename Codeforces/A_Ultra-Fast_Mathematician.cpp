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
    string s,t,ans="";
    cin>>s>>t;
    for (llint i = 0;i<s.size();i++) {
        if (s[i]==t[i]) {
            ans += '0';
        }
        else {
            ans+='1';
        }
    }
    cout<<ans<<endl;
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