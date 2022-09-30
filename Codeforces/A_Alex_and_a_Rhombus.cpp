#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, sum = 1;
    cin >> n;
    for (llint i = 1; i < n; i++)
    {
        sum += (4 * i);
    }
    cout << sum << "\n";
}
int main()
{
    llint t, n, a;
    aman();

    return 0;
}