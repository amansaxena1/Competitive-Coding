#include <bits/stdc++.h>
#define llint unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman() {
    llint x,y,ans=0;
    cin>>x>>y;
    if(x>y){
        if(x%2==0) ans = (x * x) - (y - 1);
        else ans = ((x - 1) * (x - 1)) + y;
    }
    else{
        if(y%2!=0) ans = (y * y) - x + 1;
        else ans = ((y - 1)* (y - 1)) + x;
    }
    cout<<ans<<endl;
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