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
bool check(int a, int b, int c, int mid){
    if(a + mid > b + c - mid)
        return true;
    return false;
}
void aman() {
    llint a,b,c;
    cin>>a>>b>>c;
    int l = 0, r = b, ans = 0;
    while(l <= r){
        int mid = (l + (r - l)/2);
        bool ch = check(a, b, c, mid);
        if(ch){
            ans = c - mid + 1;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << "\n";
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