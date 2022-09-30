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
    vector <llint> v(n);
    for (llint i = 0; i < n;i++)
        cin >> v[i];

    for (llint i = 1; i < n;i++){
        if (v[i] < v[i-1]){
            v[i] = v[i] * ceil(v[i-1]*1.0/v[i]);
        }
    }
    for (llint i = 0; i < n;i++)
        cout << v[i] << " ";
    cout << endl;
}
int main() {
    fast;
    int t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}