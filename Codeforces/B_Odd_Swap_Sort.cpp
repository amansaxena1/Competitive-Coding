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
    cin>>n;
    for (llint i = 0;i<n;i++) {
        cin>>a;
        v.pb(a);
    }
    llint maxEven = INT_MIN, maxOdd = INT_MIN;
    for (llint i = 0; i < n; i++)
    {
        if(v[i]%2==0){
            if(maxEven>v[i]){
                cout << "No\n";
                return;
            }
            maxEven = max(maxEven,v[i]);
        }
        else{
            if(maxOdd>v[i]){ 
                cout<<"No\n";
                return;
            }
            maxOdd = max(maxOdd,v[i]);
        }
    }
    cout<<"Yes\n";
    return;
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