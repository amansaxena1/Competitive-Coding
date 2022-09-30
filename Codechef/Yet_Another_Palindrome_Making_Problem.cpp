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
    string s;
    cin >> n >> s;

    string a = "";
    string b = "";

    for (llint i = 0; i < n; i++)
    {
        if(i%2) a+=s[i];
        else b+=s[i];
    }
    sort(all(a));
    sort(all(b));
    if(a==b) cout << "YES\n";
    else cout << "NO\n";
    
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