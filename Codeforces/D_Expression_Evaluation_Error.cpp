/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

llint cd(llint n)
{
    return floor(log10(n) + 1);
}

void aman()
{
    llint s, n;
    vector<llint> v;
    vector<llint> ans;
    cin >> s >> n;
    llint d = cd(s);
    while (s != 0)
    {
        v.pb(s % 10);
        s /= 10;
    }
    llint i = 0;
    reverse(all(v));
    while (n != 1)
    {
        d--;
        ans.pb(v[i] * pow(10, d));
        i++;
        n--;
    }
    llint num = 0;
    for (llint j = i; d > 0; j++)
    {
        d--;
        num += v[j] * pow(10, d);
    }
    ans.pb(num);
    for (llint i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}