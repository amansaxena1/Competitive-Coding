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


vector <llint> printDivisors(llint n){
    vector <llint> v;
    for (llint i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i) v.pb(i);
            else {
                v.pb(i);
                v.pb(n / i);
            }
        }
    }
    return v;
}

void aman() {
    llint n,m;
    cin >> n >> m;
    vector<llint> v = printDivisors(m);
    sort(all(v));
    vector<pair<llint, pair<llint, llint>>> ans;
    llint a, b, c, d;
    for(auto i:v){
        if(i > m/i){
            cout << "-1\n";
            return;
        }
        a = i;
        b = m / i;
        c = n - i + 1;
        d = i - 1;
        if(c<=d){
            cout << a << " " << b << "\n"
                    << c << " " << d << "\n";
            return;
        }
        c = m / i + 1;
        d = n - (m / i + 1);
        if(c<=d){
            cout << a << " " << b << "\n"
                    << c << " " << d << "\n";
            return;
        }
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