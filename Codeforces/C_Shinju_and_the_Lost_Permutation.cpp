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
    vector<llint> v, before, after;
    for(llint i=0;i<n;i++){
        llint x;
        cin >> x;
        v.pb(x);
    }
    llint ind = -1,cnt=0;
    llint f = 0;
    for (llint i = 0; i < n; i++){
        
        if(v[i] == 1){
            ind = i;
            f++;
        }
        else if(f!=0){
            after.pb(v[i]);
        }
        else if(f == 0)
            before.pb(v[i]);
    }
    if(f!=1){
        cout << "NO\n";
        return;
    }
    vector<llint> t1 = before, t2 = after;
    sort(all(t1));
    sort(all(t2));
    if(t1.size() == 0 || t1 == before){
        if(t2.size() == 0 || t2 == after){
            cout << "YES\n";
            return;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    else{
        reverse(all(t1));
        if(t1.size() == 0 || t1 == before){
            if(t2.size() == 0 || t2 == after){
                cout << "YES\n";
                return;
            }
            else{
                cout << "NO\n";
                return;                
            }
        }
        else{
            cout << "NO\n";
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