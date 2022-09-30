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


// llint upper_bound(vector<llint>v, llint target, llint raise){
//     llint n = v.size(), l = 0, r = n - 1, mid;
//     while(l<=r){
//         mid = (l + r) / 2;
//         if(v[mid]+raise == target) return mid;
//         if(v[mid]+raise <= target) l = mid+1;
//         else r = mid;
//     }
//     return mid;
// }

void aman() {

    // cout << upper_bound({1, 2, 3, 4, 6, 7, 8}, 0, 0);
    llint n,s;
    cin>>n>>s;
    vector<llint> v(n);
    for (size_t i = 0; i < n; i++)
        cin>>v[i];
    sort(all(v));
    for (llint i = 1; i < n;i++)
        v[i] += v[i - 1];

    llint raise = 0;
    while(true){
        llint up = upper_bound(v, s, raise);
        llint ans = 0;
        if(up == n){

        }
        else{
            llint shops = up - 1;
            llint days = (s - v[shops]) / shops;
            ans += days * shops;

            raise += days;
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