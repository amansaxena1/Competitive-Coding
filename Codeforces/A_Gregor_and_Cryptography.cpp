#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "2 " << n - 1 << "\n";
    }
    else
    {
        cout << "2 " << n << "\n";
    }
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