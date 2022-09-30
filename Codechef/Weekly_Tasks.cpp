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
    llint t;
    cin>>t;
    vector<llint> v(7);
    for (llint i = 0; i < 7;i++)
        cin >> v[i];
    
    llint total = accumulate(all(v), 0);
    
    if(t%total == 0){
        cout<<"7\n";
        return;
    }

    t = t%total;
    llint days = 0;
    for (llint i = 0; i < 7; i++)
    {
        if(t<=0) break;
        t-=v[i];
        days++;
    }
    cout<<days<<endl;
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