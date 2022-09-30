#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint n, a, b, i = 0;
    bool p = true;
    vector<llint> v;
    cin >> n >> a >> b;
    v.push_back(i + 1);
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes\n";
            return;
        }
        else
        {
            cout << "No\n";
            return;
        }
    }
    else if (b == 1)
    {
        cout << "Yes\n";
        return;
    }
    else if ((n - 1) % b == 0)
    {
        cout << "Yes\n";
        return;
    }
    else
    {
        for (llint i = 1; i <= n; i = i * a)
        {
            if (i == n || (n - i) % b == 0)
            {
                cout << "Yes\n";
                return;
            }
        }
        cout << "No\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}