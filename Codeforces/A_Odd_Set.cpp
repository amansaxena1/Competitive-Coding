#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, e = 0, o = 0;
    cin >> n;
    for (llint i = 0; i < 2 * n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (e == o)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
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