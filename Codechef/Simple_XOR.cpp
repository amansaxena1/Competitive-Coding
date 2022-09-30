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
    llint l,r;
    cin>>l>>r;
    for (llint i = l; i <= r; i++)
    {
        if(i%2 == 0 && i+3<=r){
            cout<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
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