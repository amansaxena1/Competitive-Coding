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
    llint n;
    cin >> n;
    vector<llint>v(n);
    for (llint i = 0; i < n; i++)
        cin >> v[i];
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    if(n==2){
        cout<<abs(v[0]-v[1])<<endl;
        return;
    }
    llint maxi=INT_MIN, mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(i > 0) maxi = max({maxi, v[i]});
        if(i < n-1) mini = min({mini, v[i]});
    }
    llint x = max({maxi-v[0], v[n-1]-mini, v[n-1]-v[0]});
    for(int i=1;i<n;i++) x = max(v[i-1]-v[i], x);
    cout<<x<<endl;
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