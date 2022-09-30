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
    llint n,a;
    cin>>n;
    map<llint, llint> mp;
    for (llint i = 0; i < n;i++)
    {
        cin >> a;
        mp[a]++;
    }
    for(auto i:mp){
        if(i.ss > 2){
            cout << i.ff<<"\n";
            return;
        }
    }
    cout << "-1\n";
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