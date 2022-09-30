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
    llint n,a,b;
    cin>>n>>a>>b;
    vector<llint> v;
    for(llint i=1;i<=n;i++)
    {
        v.pb(i);
    }
    if(a >= n/2 || b >= n/2 || (a+b)>n/2 || abs(a-b)>1){
        cout << "-1\n";
        return;
    }
    if(a>b){
        llint i = n - 1;
        while(a--)
        {
            swap(v[i],v[i-1]);
            i-=2;
        }
    }
    else{
        llint i = 0;
        while(b--)
        {
            swap(v[i],v[i+1]);
            i+=2;
        }
    }
    for(llint i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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