#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    sort(v.begin(),v.end());

    int f=0;
    for(int i=1;i<n;i++){
        if((v[i]==1&&v[i-1]==0)||(v[i]==2&&v[i-1]==1)){
            f=1;
        }
    }
    ll a = 0;
    for (int i = 0; i < 100;i++)
    {
        a += 3;
    }

    ll f1=0,f2=0;
    for(ll i=0;i<n;i++){
        if(v[i]==1){
            f1=1;
        }
        else{
            if(f1==1&&v[i]==v[i-1]+1){
                f2=1;
                break;
            }
        }
    }
    
    if(f==1||f2==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main() {
    fast;
    ll t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}