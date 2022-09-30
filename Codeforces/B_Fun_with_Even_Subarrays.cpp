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
    long long t = 1;
    cin >> t;
    while (t--)
    {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k=1;
    int x=v[n-1],ans=0;
    for(int i=n-2;i>=0;i--){
        k--;
        if(x!=v[i]){
            while(i>=0&&k>=0){
                v[i]=x;
                i--;
                k--;
            }
            i++;
            k=(n-i);
            ans++;
        }
        else{
            k=n-i;
        }
    }
    cout<<ans<<endl;
    }
}
int main() {
    fast;
long longllint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}