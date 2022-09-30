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
    llint n,a=0,b=0,cnt=0;
    cin>> n;
    cin >> b;
    for (llint i = 0; i < n-1; i++){
        cin >> a;
        if(a < b) {
            // cout << b - a <<"\n";
            cnt += (b - a);
        }
        b = max(a, b);
    }
    cout<<cnt<<endl;
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