
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
    cin>>m;
    for (llint i = 0; i < n; i++){
        map<llint, llint> mp;
        for (llint j = i; j < n; j++){
            mp[v[j]]++;
            if(mp.size() > m || (j > 0 && v[j] < v[j-1])){
                maxi = max(maxi, j - i);
            }
        }
    }
    cout << maxi<<"\n";
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