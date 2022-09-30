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
    llint n,m;
    cin >> n >> m;
    vector<llint>v(n);
    for (llint i = 0; i < n;i++)
        cin >> v[i];

    
    string ans = "";
    for (llint i = 0; i < m;i++)
    {
        ans += 'B';
    }
    for (llint i = 0; i < n; i++)
    {
        if(v[i]-1 < m + 1 - v[i] - 1){
            if(ans[v[i]-1] == 'A'){
                ans[m + 1 - v[i] - 1] = 'A';        
            }
            ans[v[i] - 1] = 'A';
        }
        else{
            if(ans[m + 1 - v[i] - 1] == 'A'){
                ans[v[i]-1] = 'A';        
            }
            ans[m + 1 - v[i] - 1] = 'A';
        }
    }
    cout <<ans << "\n";
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