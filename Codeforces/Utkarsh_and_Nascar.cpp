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

llint mini(llint a, llint b, llint c, llint d) {
    if(a <= b && a <= c && a <= d) return a;
    if(b <= a && b <= c && b <= d) return b;
    if(c <= a && c <= b && c <= d) return c;
    return d;  
}

int getMinCostPath(vector<llint> r, vector<llint> c, llint start_row, llint start_col, llint end_row, llint end_col, llint sum)
{
    if(start_row > r.size() || start_col > c.size() || start_row < 0 || start_col < 0)
        return INT_MAX;

    if(start_row == end_row and start_col == end_col)
        return sum;

    llint x = getMinCostPath(r, c, start_row, start_col + 1, end_row, end_col, sum+c[start_col]);
    llint y = getMinCostPath(r, c, start_row + 1, start_col, end_row, end_col, sum+r[start_row]);
    llint z = getMinCostPath(r, c, start_row - 1, start_col, end_row, end_col, sum+r[start_row]);
    llint w = getMinCostPath(r, c, start_row, start_col - 1, end_row, end_col, sum+c[start_col]);
    llint minimum = mini(w, x, y, z);
    // return 10;
    return minimum;
}
void aman() {
    llint n,m;
    cin >> n >> m;

    vector<llint>rc,cc;
    for(llint i=0;i<n;i++) {
        llint x;
        cin >> x;
        rc.pb(x);
    }
    for(llint i=0;i<m;i++) {
        llint x;
        cin >> x;
        cc.pb(x);
    }
    llint q;
    cin>>q;
    for(llint i=0;i<q;i++) {
        llint a,b,c,d;
        cin >> a >> b >> c >> d;
        llint ans=0;
        ans= getMinCostPath(rc,cc,a,b,c,d,0);
        cout<<ans<<endl;
    }
    
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}