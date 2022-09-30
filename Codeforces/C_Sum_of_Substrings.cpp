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
    llint n,k;
    string s;
    cin>>n>>k>>s;
    llint f = 0, l = 0, z = 0;
    ;
    for(llint i=0;i<n;i++){
        if(s[n-i-1] == '1'){
            z = 1;
            break;
        }
        l++;
    }
    // cout << f << "-" << l << "-";
    if(z && l<=k){
        s[n-l-1] = '0';
        s[n-1] = '1';
        k-=l;
    }
    // cout << s << "-";
    z = 0;
    for(llint i=0;i<n-1;i++){
        if(s[i] == '1'){
            z = 1;
            break;
        }
        f++;
    }
    if(z && f<=k){
        s[f] = '0';
        s[0] = '1';
    }
    llint ans = 0;
    char a,b = s[0];
    for(llint i=1;i<n;i++){
        a = b;
        b = s[i];
        ans += ((a - '0')*10 + (b - '0'));
    }
    cout<<ans<<"\n";
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