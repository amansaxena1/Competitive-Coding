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
bool fun(llint x, llint y, llint h, llint m)
{
    llint a[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
    if (a[x % 10] == -1 || a[x / 10] == -1 || a[y / 10] == -1 || a[y % 10] == -1)
        return false;
    return a[y % 10] * 10 + a[y / 10] < h && a[x % 10] * 10 + a[x / 10] < m;
}
void aman()
{
    llint h, m, q, w;
    char k;
    cin >> h >> m;
    cin >> q >> k >> w;
    while (!fun(q, w, h, m))
    {
        w = (w + 1) % m;
        if (w == 0)
            q = (q + 1) % h;
    }
    cout << q / 10 << q % 10 << ":" << w / 10 << w % 10 << endl;
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