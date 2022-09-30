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
    double x, a, b;
    cin >> x >> a >> b;
    x -= 1;
    a -= b;
    llint d = sqrt(a * a * x * x - 4 * a * x * b);
    if(d<0){
        if( b == (x*a)){
            cout << x << "\n";
            return;
        }
        else{
            cout << "-1\n";
            return;
        }
    }
    double d1 = ((-1 * a * x) + d) / (-2 * (a));
    double d2 = ((-1*a*x) - d) / (-2 * (a));
    if(ceil(d1) == floor(d1) && ceil(d2) == floor(d2)){  
        if(d1 + d2 == x && (1/d1 + 1/d2 == a/b) && (d1 > 0 && d2 > 0)){
            cout<<max((llint)d1,(llint)d2)<<"\n";
        }
        else{
            cout << "-1\n";
        }
    }
    else{
        x++;
        a += b;
        if( b == (x-1)*(a-b)){
            cout << x-1 << "\n";
        }
        else{
            cout << "-1\n";
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