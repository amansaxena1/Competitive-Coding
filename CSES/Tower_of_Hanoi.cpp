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

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, vector<char>&v){
    if (n == 0) return;
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, v);
    v.pb(from_rod);
    v.pb(to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, v);
}

void aman() {
    llint n;
    cin >> n;
    vector<char> v;
    towerOfHanoi(n, '1','3','2', v);
    cout << v.size() / 2<<"\n";
    for (llint i = 0; i < v.size();i+=2){
        cout << v[i] << " " << v[i + 1] << "\n";
    }
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