#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, sum = 0;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    if (sum < 0 || sum < n)
    {
        cout << "1"
             << "\n";
    }
    else
    {
        cout << sum - n << "\n";
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