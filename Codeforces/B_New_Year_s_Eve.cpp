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
// llint min(llint a, llint b) return a < b ? a : b;

void aman() {
    llint n,k;
    cin>> n >> k;
    if(k==1)
        cout << n << "\n";
    else{
        llint dig = 0,a=1;
        while(a <= n){
            a *= 2;
            dig++;
        }
        dig--;
        llint ans = 1;
        for (llint i = 0;i<dig;i++) ans = ((ans << 1) | 1);
        
        cout << ans <<"\n";
    }
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}