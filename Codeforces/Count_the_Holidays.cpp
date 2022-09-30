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
    cin >> n;
    // llint a[n];
    llint cnt = 8;
    for(llint i=0; i<n; i++){
        cin>>a;
        if(a !=6 &&a!=7 && a!=13&& a!=14 && a!=20&&a!=21&&a!=27&&a!=28)
            cnt++;
    }

    cout<<cnt<<"\n";


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