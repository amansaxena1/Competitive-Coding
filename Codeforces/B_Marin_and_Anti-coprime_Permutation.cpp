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

llint modFact(llint n){
    llint p = 998244353;
    if (n >= p)
        return 0;
 
    llint result = 1;
    for (llint i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}


void aman() {
    llint n;
    cin >> n;

    if(n%2!=0){
        cout<<"0"<<endl;
        return;
    }
    llint even = n / 2;
    llint odd = n - even;
    llint ans = (modFact(even) * modFact(odd)) % 998244353;

    cout << ans << "\n";
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