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
    cin >> n >> m;
    vector<string>v(n);
    for (llint i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (llint i = 0; i < m; i++){
        llint last = n - 1;
        for (llint j = n-1; j >= 0; j--){
            if(v[j][i] == 'o')
                last = j-1;
            else if(v[j][i] == '*'){
                if(j < last){
                    v[last][i] = '*';
                    last--;
                    v[j][i] = '.';
                }
                else if(j == last){
                    last = j-1;
                }
            }
        }
    }
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m;j++)
        {
            cout << v[i][j];
        }
        cout << "\n";
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