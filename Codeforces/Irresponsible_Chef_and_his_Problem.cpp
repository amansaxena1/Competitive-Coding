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
    llint n;
    cin >> n;
    llint diff = 0,f=0;
    double s,c;

    vector<pair<llint,llint>> v;
    for(llint i=0;i<n;i++) {
        cin >> s >> c;
        v.pb(mp(s,c));
    }
    for(llint i=0;i<n-1;i++) {
        if(v[i+1].ff == v[i].ff && v[i+1].ss != v[i].ss) {\
            cout<<"NO\n";
            return;
        }
        if(v[i+1].ff < v[i].ff || v[i+1].ss < v[i].ss) {
            cout<<"NO\n";
            return;
        }
    }
    for(llint i=0;i<n;i++)
    {
        s = v[i].ff;
        c = v[i].ss;
        if(c>s){
            cout<<"NO\n";
            return;
        }
        if(diff <= s - c ) diff = s - c;
        else{
            cout<<"NO\n";
            return;
        }
        
    }
    cout<<"YES ";
    if((c/s)*100 >= 75){
        cout << "CAKEWALK\n";
    }
    else if((c/s)*100 >= 50){
        cout << "EASY\n";
    }
    else if ((c/s)*100 >= 25){
        cout<<"MEDIUM\n";
    }
    else{
        cout<<"HARD\n";
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