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
    llint n,k;
    cin >> n >> k;
    if(n==1&&k==1){
        cout<<1<<endl;
        return;
    }
    if(n!=1&&k==1){
        cout<<-1<<endl;
        return;
    }
    for (llint i = 1; i <= k-1; i++){
        cout << i <<" ";
    }
    for (llint i = n;i>k-1;i--){
        cout << i <<" ";
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