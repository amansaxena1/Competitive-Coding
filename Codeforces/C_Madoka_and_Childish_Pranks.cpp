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
    llint n, m;
    string s;
    cin >> n >> m;
    int v[n][m];
    for (llint i = 0; i < n; i++)
    {
        cin >> s;
        for (llint j = 0; j < m; j++)
        {
            v[i][j] = s[j] - '0';
        }
    }
// for (llint i = 0; i < n; i++)
//     {
//         for (llint j = 0; j < m; j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout << "\n";
//     }
//     cout << "\n";

    vector<llint> ans;
    if(v[0][0] == 1){
        cout << "-1\n";
        return;
    }

    for (llint i = n-1; i >= 0; i--)
    {
        for (llint j = m-1; j >= 0; j--)
        {
            if(v[i][j] == 1){
                if(j != 0){
                    ans.pb(i+1);
                    ans.pb(j-1+1);
                    ans.pb(i+1);
                    ans.pb(j+1);
                }
                else if( i != 0){
                    ans.pb(i-1+1);
                    ans.pb(j+1);
                    ans.pb(i+1);
                    ans.pb(j+1);
                }
                else{
                    cout << "-1\n";
                    return;            
                }
            }
        }
    }
    cout << ans.size() / 4<<"\n";
    for (llint i = 0; i < ans.size(); i += 4)
    {
        cout << ans[i] << " " << ans[i + 1] << " " << ans[i + 2] << " " << ans[i + 3] << "\n";
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