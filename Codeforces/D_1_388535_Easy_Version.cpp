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

llint comp(llint a){
    if(a%4 == 0) return a;
    if(a%4 == 1) return 1;
    if(a%4 == 2) return a+1;
    return 0;
}

void aman() {
    llint l,r;
    llint a=0,b=0,p,ans=0;
    cin>>l>>r;
    llint n = r-l+1;
    a = comp(r) ^ comp(l);
    
    for(llint i=0;i<n;i++){
        cin>>p;
        b^=p;
    }
    if(n%2!=0){
        cout<<(a^b)<<"\n";
    }
    else{

    }
    // for (llint i = 1; i < 10;i++)
    // {
    //     cout << i<<" -- ";
    //     for (llint j = l; j <= r;  j++)
    //     {
    //         cout << (i ^ j) << " ";
    //     }
    //     cout << "\n";
    // }
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
