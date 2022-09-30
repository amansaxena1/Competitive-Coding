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
    llint n,a;
    vector<llint>v;
    cin>>n;
    llint pos = 0, neg = 0;
    for (llint i = 0; i < n; i++)
    {
        cin>>a;
        v.pb(a);
        if(a>0)
            pos++;
        else
            neg++;
    }
    vector<llint> u;
    u=v;
    sort(all(u), greater<llint>());
    if(u==v){
        cout<<"-1\n";
        return;
    }
    if(pos > 1){
        for (llint i = 0; i < n;i++)
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