/*       ¯ಠ_ಠ_/¯        */
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
    llint n;
    vector<llint>v;
    string s;
    cin>>n;
    if(n%3040!=0){
        cout<<"-1\n";
        return;
    }
    llint a = n / 3040;
    llint cnt = 0;
    while (a!=0)
    {
        cnt+=a%10;
        a /= 10;
    }
    cout << cnt << "\n";
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