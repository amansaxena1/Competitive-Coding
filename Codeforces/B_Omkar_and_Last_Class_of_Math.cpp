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
llint isPrime(llint n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return -1;

    if (n % 2 == 0)
        return 2;

    if (n % 3 == 0)
        return 3;

    for (llint i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0)
            return i;
        if (n % (i + 2) == 0)
        {
            return i + 2;
        }
    }
    return -1;
}
void aman()
{
    llint n, a, b;
    vector<llint> v;
    string s;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << "\n";
        return;
    }
    a = isPrime(n);
    if (a == -1)
    {
        cout << 1 << " " << n - 1 << "\n";
        return;
    }
    if (isPrime(a) == -1)
    {
        cout << n / a << " " << n - (n / a) << "\n";
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