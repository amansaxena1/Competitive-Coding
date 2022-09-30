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
    llint n, x;
    cin>>n>>x;
    if(n % 2 == 0){
        cout<<"YES\n";
        return;
    }
    if(n % 2 != 0 && x % 2 != 0){
        cout<<"YES\n";
        return;
    }
    cout << "NO\n";
    return;
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