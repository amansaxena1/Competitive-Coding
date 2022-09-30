#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }
    if (n % 2 == 0)
    {
        for (llint i = 0; i < n - 1; i += 2)
        {
            swap(v[i], v[i + 1]);
        }
    }
    else
    {
        for (llint i = 0; i < n; i++)
        {
            if (i == 0)
            {
                v[i] = 3;
            }
            else if (i == 1)
            {
                v[i] = 1;
            }
            else if (i == 2)
            {
                v[i] = 2;
            }
            else
            {
                swap(v[i], v[i + 1]);
                i++;
            }
        }
    }
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
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