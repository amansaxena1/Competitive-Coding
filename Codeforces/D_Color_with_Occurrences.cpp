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
    string t;
    cin>>t;
    llint n;
    cin>>n;
    vector<string> v(n);
    for (llint i = 0; i < n;i++) cin >> v[i];

    vector<vector<llint>> res(t.length());
    for (llint i = 0; i < n; i++){
        for (llint j = 0; j < t.length(); j++){
            llint f = 0, p = j;
            for (llint k = 0; k<v[i].length(); k++){
                if(v[i][k] != t[j]){
                    f = 1;
                    break;
                }
                j++;
            }
            if(f == 0){
                res[p].pb(i);
            }
            j = p;
        }
    }

    vector<vector<llint>>g(t.length());
    for (llint i = 0; i < res.size(); i++){
        for (llint j = 0; j < res[i].size(); j++){
            for (llint k = 0; k < v[res[i][j]].length(); k++){
                g[i + k].pb(res[i][j]);
            }
        }
    }

    for(auto i:g){
        if(!i.size()){
            cout << "-1\n";
            return;
        }
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