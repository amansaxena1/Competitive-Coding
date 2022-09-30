#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, b, count1 = 0, count2 = 0;
    cin >> a >> b;
    if (abs(a - b) == 0)
    {
        cout << "0 0\n";
    }
    else
    {
        llint mini, maxi;
        mini = min(a, b);
        maxi = mini;
        // while (true)
        // {
        //     if (mini % abs(a - b) == 0 || maxi % abs(a - b) == 0)
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         mini++;
        //         maxi--;
        //         count++;
        //     }
        // }
        count1 = mini - ((mini / abs(a - b)) * abs(a - b));
        count2 = (((mini / abs(a - b)) + 1) * abs(a - b)) - mini;
        llint ans = min(count1, count2);
        cout << abs(a - b) << " " << ans << "\n";
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