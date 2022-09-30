#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, p, q;
    cin >> a;
    p = a / 3;
    q = a / 3;
    if (p + (2 * q) < a)
    {
        p++;
    }
    if (p + (2 * q) != a)
    {
        p = a / 3;
        q = (a / 3) + 1;
    }
    cout << p << " " << q << "\n";
}
int main()
{
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}