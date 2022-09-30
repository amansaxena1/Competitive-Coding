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
    cin>>n>>m;
    vector <llint>t(m);
    map<llint, llint>mp;
    for (llint i = 0; i < m; i++) {
        cin >> t[i];
        mp[t[i]]++;
    }
    for (llint i = 1; i <= n; i++) if(mp.find(i) == mp.end()) mp[i] = 0;

    priority_queue<llint> pmax;
    priority_queue<llint, vector<llint>, greater<llint>> pmin;
    
    for(auto i:mp) {
        pmax.push(i.ss);
        pmin.push(i.ss);
    }

    while(pmax.top() - pmin.top() > 2) {
        llint h = pmax.top();
        pmax.pop();
        llint l = pmin.top();
        pmin.pop();
        pmax.push(h-1);
        pmin.push(l+2);
    }
    llint h = pmax.top();
    cout << h << "\n";

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