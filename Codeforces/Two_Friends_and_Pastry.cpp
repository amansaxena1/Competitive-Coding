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
void aman() {
    llint n,a;
    vector<llint>v;
    string s;
    cin>>n;
    cin >> s;
    char c;
    cin >> c;
    llint cnt = 0;
    for(int i=0;i<n;i++) {
        if(s[i]==c) {
            cnt++;
        }
    }
    cout<<cnt*(cnt-1)/2<<endl;
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