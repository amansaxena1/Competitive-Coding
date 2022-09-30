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
    cin>>n;
    if(n==1) {
        cout<<1<<"\n";
        return;
    }
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        v.pb((i + 2)%n);
    }
    for (llint i = 0; i < v.size(); i++)
    {
        if(v[i]==0){
            cout << n << " ";
        }
        else cout<<v[i]<<" ";
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