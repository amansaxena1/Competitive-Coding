#include <bits/stdc++.h>
#define llint double
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

llint get(llint p, llint k, vector<llint> &v, vector<vector<llint>> &cost){
    if (p >= cost.size()){
        llint c = 0;
        for (int i = 0; i < v.size(); i++){
            llint cur = v[i];
            while (i < v.size() && cur == v[i]) i++;
            i--;
            c++;
        }
        if (c == k) return 0;
        else return 1e9;
    }
    if (v[p] != 0) return get(p + 1, k, v, cost);
    llint best = LLONG_MAX;
    for (int i = 0; i < (int)cost[p].size(); i++)    {
        v[p] = i + 1;
        best = min(best, cost[p][i] + get(p + 1, k, v, cost));
        v[p] = 0;
    }
    return best;
}

void aman(){
    llint n, m, k;
    cin >> n >> m >> k;
    vector<llint> v(n);
    map<llint, llint> M;
    for (auto &i : v){
        cin >> i;
        if (i != 0) M[i]++;
    }
    vector<vector<llint>> cost(n, vector<llint>(m));
    for (auto &i : cost) for (auto &j : i) cin >> j;
    cout << get(0, k, v, cost);
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