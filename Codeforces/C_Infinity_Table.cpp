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

void aman()
{
}
int main()
{
    fast;
    llint t = 1, n, a = 2;
    cin >> t;
    vector<llint> v;
    for (llint i = 0; i < 100001; i++)
    {
        if (i == 0)
        {
            v.pb(1);
        }
        else
        {
            v.pb(v[i - 1] + a);
            a += 2;
        }
    }
    while (t--)
    {
        llint n, index, ele, x, y;
        cin >> n;
        for (llint i = 0; i < 100001; i++)
        {
            if (v[i] + i >= n)
            {
                ele = v[i];
                index = i + 1;
                break;
            }
        }
        // cout << index << " " << ele << "che\n";
        if (n == ele)
        {
            cout << index << " " << index << "\n";
        }
        else
        {
            if (n > ele)
            {
                x = index;
                y = index - (n - ele);
            }
            else
            {
                x = index - (ele - n);
                y = index;
            }
            cout << x << " " << y << "\n";
        }
    }
    return 0;
}