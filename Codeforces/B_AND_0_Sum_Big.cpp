/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define ullint unsigned long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
ullint fact(llint n)
{
    ullint res = 1, i;
    for (i = 2; i <= n; i++)
    {
        res = (res * i);
    }
    return res;
}

void aman()
{
    llint n, k, p, a;
    vector<llint> v;
    string s;
    cin >> n >> k;
    p = k;
    a = n;
    p--;
    while (p--)
    {
        n = (a * n) % mod;
    }
    cout << n << "\n";
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