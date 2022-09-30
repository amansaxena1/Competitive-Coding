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
    if(n%2 != 0){
        for (llint i = 0;i<n;i++)
            cout << i + 1 << " ";

        cout << "\n";
    }
    else{
        if(n==2){
            cout<<"-1\n";
            return;
        }
        // if(n%4==0){
        //     llint a=1, b=4, c=2, d=3;
        //     llint p = n / 4;
        //     while(p--){
        //         cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        //         a+=4;
        //         b+=4;
        //         c+=4;
        //         d+=4;
        //     }
        //     cout << "\n";
        // }
        else{
            cout << "2 3 1 ";
            for(llint i = 4; i<=n; i++){
                cout << i << " ";
            }
            cout << "\n";
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