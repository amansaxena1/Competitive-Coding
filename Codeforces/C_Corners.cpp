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
    llint n, m, ans = 0;
    bool f = false;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m, 0));
    for (llint i = 0; i < n; i++) {
        for (llint j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (llint i = 0; i < n; i++) {
        for (llint j = 0; j < m; j++) {
            if(v[i][j] == '1') ans++;
        }
    }
    if(ans == n*m) {
        ans -= 2;
        return;
    }
    else if(ans == 0)

    for (llint i = 0; i < n; i++){
        for (llint j = 0; j < m; j++){
            if(i+1 < n && v[i][j] == '0' && v[i+1][j] == '0') f = true;
            if(j+1 < m && v[i][j] == '0' && v[i][j+1] == '0') f = true;
            if(i+1<n && j+1 < m && v[i][j] == '0' && v[i+1][j+1] == '0') f = true;
            if(i+1<n && j-1 > -1 && v[i][j] == '0' && v[i+1][j-1] == '0') f = true;
        }
        if(f) break;
    }
    if(ans == 0){
        cout<<"0\n";
        return;
    }
    else if(!f)
        ans -= 1;
    cout << ans << "\n";
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