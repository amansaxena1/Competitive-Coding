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
    vector<vector<llint>> v(3, vector<llint>(4));

    for (llint i = 0; i < 3; i++){
        for (llint j = 0; j < 4;j++){
            cin >> v[i][j];
        }
    }

    llint sum = 1000000;

    llint a = min(v[0][0], min(v[1][0], v[2][0]));
    llint b = min(v[0][1], min(v[1][1], v[2][1]));
    llint c = min(v[0][2], min(v[1][2], v[2][2]));
    llint d = min(v[0][3], min(v[1][3], v[2][3]));

    vector<llint> t;
    t.pb(a);
    t.pb(b);
    t.pb(c);
    t.pb(d);

    if(a+b+c+d < sum){
        cout << "IMPOSSIBLE\n";
        return;
    }

    llint i = 0;
    vector<llint> ans;
    while(sum!=0){
        if(t[i] > sum){
            ans.pb(sum);
            sum = 0;
        }
        else {
            ans.pb(t[i]);
            sum -= t[i];
        }
        i++;
    }

    for (llint i = 0; i < 4;i++)
    {
        if(i>=ans.size()){
            cout << "0 ";
        }
        else{
            cout << ans[i] << " ";
        }
    }
    cout << "\n";
    
}
int main() {
    fast;
    llint t=1, n, a=1;
    cin >> t;
    while (t--) {
        cout << "Case #" << a << ": ";
        aman();
        a++;
    }
    return 0;
}