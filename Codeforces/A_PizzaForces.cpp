#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, t = 0;
    cin >> n;
    t = 15;
    n -= 6;
    if (n > 0)
    {
        llint a = n / 2;
        if (n % 2 != 0)
        {
            a++;
        }
        t += a * 5;
    }
    cout << t << "\n";
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