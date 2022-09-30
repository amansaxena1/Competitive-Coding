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
    cin >> n >> m;
    if(m<n){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0 && m%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0){
        int x = m / n;
        int y= m % n;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            llint p = i < n - y ? x : x + 1;
            cout<<p<<" ";
        }
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++) cout<<"1 ";
        cout << m - (n - 1);
    }
    cout << "\n";
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