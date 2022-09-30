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
    vector<llint> v;
    for (llint i = 0; i < n; i++) {
        llint x;
        cin >> x;
        v.pb(x);
    }
    llint cnt = 0;
    for (llint i = 1; i < n-1;i++)
    {
        if(v[i] > v[i-1] && v[i] > v[i+1])
        {
            if (i + 2 < n) {
                v[i + 1] = max(v[i], v[i + 2]);
            } else {
                v[i + 1] = v[i];
            }
            cnt++;
        }
        
    }
    cout << cnt<<"\n";
    for (llint i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
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