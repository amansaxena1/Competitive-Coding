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
    if(n<4 && n>1){
        cout << "NO SOLUTION\n";
    }
    else{
        for (llint i = 2; i <= n;i+=2)
        {
            cout << i << " ";
        }
        for (llint i = 1; i <= n;i+=2)
        {
            cout << i << " ";
        }

    }
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}