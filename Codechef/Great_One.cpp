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

vector<double> findRoots(llint a, llint b, llint c)
{
    vector<double> v;
    if (a == 0) {
        cout << "Invalid";
        return v;
    }
    llint d = (b * b) - (4 * a * c);
    double sqrt_val = sqrt(abs(d-0));

    
    if (d > 0) {
        v.pb((double)(-b + sqrt_val) / (2 * a));
        v.pb((double)(-b - sqrt_val) / (2 * a));
    }
    else if (d == 0) {
        v.pb(-(double)b / (2 * a));
        v.pb(-(double)b / (2 * a));
    }
    return v;
}

llint min(llint a, llint b)
{
    return (a < b) ? a : b;
}



void aman() {
    unsigned llint x;
    llint z;
    cin>>x>>z;
    if(x==1){
        cout << "0\n";
        return;
    }
    llint cnt = 0;
    unsigned llint sum = z * (z + 1) / 2;
    sum--;
    if(sum<x){
        cout << "I am Noob\n";
        return;
    }
    if(x == 1){
        cout << "0\n";
        return;
    }
    if(z>=x){
        cout << "1\n";
        return;
    }


    vector<double>v = findRoots(1, -1*((2*z)-1), 2*x - 2);

    if(v.size()==0){
        cout << "I am Noob\n";
        return;
    }
    else{
        llint g = ceil(v[0]);
        llint f = ceil(v[1]);

        // cout<<g<<" "<<f<<"\n";
        llint ans = min(g, f);
        cout << ans << "\n";
        return;
    }
    cout << cnt + 1 << "\n";
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