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
    vector<llint> v(3);
    for (llint i = 0;i<3;i++)
    {
        cin >> v[i];
    }
    if(v[n-1] == 0 || v[v[n-1]-1] == 0){
        cout << "NO\n";
        return;
    }
cout<<"YES\n";
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