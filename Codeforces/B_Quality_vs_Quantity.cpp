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
    vector<llint> v(n);
    for (llint i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    llint sum1 = 0,sum2=0;
    // for (llint i = 0; i < n;i++)
    // {
    //     if(i<(n/2) + 1) sum1+=v[i];
    //     else sum2+=v[i];
    // } 
    // 2 3 4 5 6

    llint sum1=v[0] + v[1],sum2=v[n-1];
    while(true){
        if(sum1 < sum2){
            cout<<"YES\n";
            return;
        }
        else{
            
        }
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