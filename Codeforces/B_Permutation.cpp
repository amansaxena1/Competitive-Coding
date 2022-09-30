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
    
    cout <<"2\n";
    vector<llint>v(n), vis(n+1, 0);
    for (llint i = 0; i < n; i++)
        v[i] = i + 1;

    for (llint j = 1; j <= n; j++){
        if(!vis[j]){
            for (llint i = j; i <= n; i *= 2)
            {
                cout << i << " ";
                vis[i] = 1;
            }
        }
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