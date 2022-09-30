
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
     llint x, y;
    cin>>x>>y;
    llint diff = x-y;
    if(y == 0) cout<<x<<"\n";
    else if(diff != 0){
        llint temp = 2*y + diff;
        cout<<temp<<"\n";
        return;
    }
    else{
        llint temp = 2*y-1;
        cout<<temp<<"\n";
        return;
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