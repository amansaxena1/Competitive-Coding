#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a = 0;
    cin >> n;
    while (n != 0)
    {
        a = max(a, n % 10);
        n /= 10;
    }
    cout << a << "\n";
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