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
    cin>>n;
    llint ans = 0, nn = n;
    vector<llint> v;
    ans = ((n * (n + 1)) / 2);
    if(ans % 2 != 0) cout << "NO\n";
    else{
        llint a = ans / 2;
        while(true){
            if (a > n){
                v.pb(n);
                a -= n;
                n--;
            }
            else{
                if(a==0)
                    break;
                v.pb(a);
                break;
            }
        }
        n = nn;
        cout<<"YES\n";
        cout<<v.size()<<"\n";
        for(llint i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        cout<<n - v.size()<<"\n";
        a = 0;
        for(llint i = n; i >= 1; i--){
            if(i > v[a]) cout<<i<<" ";
            else{
                a++;
            }            
        }
    }
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