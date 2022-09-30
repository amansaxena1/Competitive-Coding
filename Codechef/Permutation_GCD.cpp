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
    llint n,x;
    cin>>n>>x;
    if(x<n){
        cout<<"-1"<<endl;
        return;
    }
    llint a = x - n;
    cout<<a+1<<" ";
    for(int i=1; i<=n; i++) if(a+1 != i) cout<<i<<" ";
    cout<<"\n";
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