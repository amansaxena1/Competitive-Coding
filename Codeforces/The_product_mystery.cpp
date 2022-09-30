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


llint gcd(llint a, llint b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

void aman() {
    llint b,c,a;
    cin>>b>>c;
    if(b%c==0){
        cout<<"1\n";
        return;
    }
    a = gcd(b,c);
    a = c/a;
    cout << a <<"\n";
    
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