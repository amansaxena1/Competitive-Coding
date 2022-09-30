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
    llint n,a;
    vector<llint>v;
    cin>>n;
    for(llint i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    llint cnt = 0;
    for (llint i = 0; i < n;i++){
        for (llint j = i; j < n;j++){
            cnt += j - i + 1;
            for (llint k = i; k <= j;k++){
                if(v[k] == 0){
                    cnt += 1;
                }
            }
        }
    }
    cout<<cnt<<endl;
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