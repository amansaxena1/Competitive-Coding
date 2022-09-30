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
    unsigned long long int n, a;
    cin >> n;
    vector<llint> v(10);

    while (true)
    {
        a = n;
        int flag = 0;
        for (llint i = 0; i < 10; i++)
        {
            v[i] = -1;
        }
        while (a != 0)
        {
            v[a % 10]++;
            a /= 10;
        }
        for (llint i = 1; i < 10; i++)
        {
            if (n % i != 0 && v[i] > -1)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << n << "\n";
            return;
        }
        else
        {
            n++;
        }
    }
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