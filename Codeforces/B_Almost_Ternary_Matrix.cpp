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
    llint n, m;
    cin>>n>>m;
    bool f = true, s = true;
    string a = "1 0 ", b = "0 1 ";
    for(llint j=0;j<n/2;j++){
        
            swap(a, b);
        f = true;
        for(llint i=0;i<m;i+=2){
            if(f) cout<<a;
            else cout<<b;
            f = !f;
        }
        cout<<"\n";
    }
    b = "1 0 ", a = "0 1 ";
    f = true, s= true;
    for(llint j=0;j<n/2;j++){
        
            swap(a, b);
        f = true;
        for(llint i=0;i<m;i+=2){
            if(f) cout<<a;
            else cout<<b;
            f = !f;
        }
        cout<<"\n";
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