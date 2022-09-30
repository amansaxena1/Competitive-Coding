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
    vector<llint> v(1,0);
    for (llint i = 0; i < n; i++)
    {
        llint a = v.size();
        for (llint j = 0; j<a; j++)
        {
            v.pb(v[a - j - 1] | 1 << i);
        }
    }

    // for (llint i = 0; i < n; i++)
    //     cout << "0";
    // cout << "\n";
    for (llint i = 0; i < v.size(); i++)
    {
        // cout << v[i] << "\n";
        llint a = v[i];
        string s = "";
        while (a)
        {
            if (a & 1)
                s += "1";
            else s+="0";
            a>>=1;
        }
        for (llint j = s.length(); j < n; j++)
        {
            s += '0';
        }
        reverse(all(s));
        cout << s<<"\n";
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