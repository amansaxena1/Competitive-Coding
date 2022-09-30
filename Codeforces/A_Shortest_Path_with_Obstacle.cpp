#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a1, a2, b1, b2, f1, f2, ans, diff;
    cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;
    if (a1 == b1)
    {
        if (a2 == b2)
        {
            diff = 0;
        }
        else
        {
            diff = abs(a2 - b2);
        }
        if (f1 == a1 && ((f2 > a2 && f2 < b2) || (f2 < a2 && f2 > b2)))
        {
            diff += 2;
        }
    }
    else if (a2 == b2)
    {
        if (a1 == b1)
        {
            ans = 0;
        }
        else
        {
            diff = abs(a1 - b1);
        }
        if (f2 == a2 && ((f1 > a1 && f1 < b1) || (f1 < a1 && f1 > b1)))
        {
            diff += 2;
        }
    }
    else
    {
        diff = abs(a1 - b1) + abs(a2 - b2);
    }
    cout << diff << "\n";
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