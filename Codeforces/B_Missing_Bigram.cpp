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
    vector<string> v(n);
    for(llint i=0;i<n-2;i++)
        cin>>v[i];

    int f = 0;
    string str = "";
    str += v[0][0];
    for (llint i = 1;i<n-2;i++) {
        if(v[i][0] == v[i-1][1]) {
            str+=v[i][0];
        }
        else{
            f = 1;
            str+=v[i-1][1];
            str+=v[i][0];
        }
    }
    str+=v[n-3][1];
    if(!f)
        str += 'a';
    cout << str << "\n";
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