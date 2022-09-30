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
    cin >>n;
    vector<llint> a(n);
    for (llint i = 0; i < n;i++) cin >>a[i];

    llint maxi = 1, maxl = 0, maxr = 0, curr = 1;
    llint l = 0, r = 0;
    for (llint i = 0; i < n;i++){
        curr = curr * a[i];
        if(curr > maxi){
            maxi = curr;
            maxl = l;
            maxr = i;

        }
        if(curr == 0){
            l = i+1;
            curr = 1;
        }
    }
    llint pp = maxi, qq = maxl, rr = maxr;
    reverse(all(a));
    maxi = 1, curr = 1;
    l = 0, r = 0;
    for (llint i = 0; i < n;i++){
        curr = curr * a[i];
        if(curr > maxi){
            maxi = curr;
            maxl = l;
            maxr = i;
        }
        if(curr == 0){
            l = i+1;
            curr = 1;
        }
    }

    // 1 2 3 4 5 6 7 8 9
        // cout << maxi<<" "<<maxr << " " << n - 1 - maxl << "\n";
    if(maxi == 1){
        cout<<n<<" 0\n";
        return;
    }
    if(maxi > pp){
        // cout << "yhi h";
        cout <<n - 1 - maxr << " " << maxl << "\n";
        return;
    }
    cout <<qq <<" " <<n-1-rr <<endl;


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