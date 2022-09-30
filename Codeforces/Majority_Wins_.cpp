/*       ¯ಠ_ಠ_/¯        */
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
    double n,a;
    cin >> n;
    map<double,double>mp;
    for(llint i=0;i<n;i++) {
        cin >> a;
        mp[a]++;
    }
    map<double,double>::iterator i;
    double b = 0;
    for(i = mp.begin() ; i != mp.end() ; i++){
        if(i->second > (n/2)){
            b = 1;
            cout<<i->first<<"\n";
            break;
        }
    }
    if(b == 0)
    cout<<"NOTA\n";
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