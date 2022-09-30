
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
    // Aman Saxena No Plag
    llint n, m, maxi = 1;
    cin>>n;
    vector<llint> v(n);
    for (llint i = 0; i < n;i++)
        cin >> v[i];
    vector<llint>a,b;
    for (llint i = 0; i < n; i++) i % 2 ? a.pb(v[i]) : b.pb(v[i]);
    
    sort(all(a));
    sort(all(b));
    llint p = 0;
    for (llint i = 0; i < n; i++)
    {
        if(i%2){
            v[i] = a[p];
            p++;
        }
        else{
            v[i] = b[p];
        }
    }
    for (llint i = 0; i < n; i++)
    {
        cout << v[i] << " ";
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