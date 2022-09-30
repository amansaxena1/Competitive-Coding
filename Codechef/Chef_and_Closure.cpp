/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void aman()
{
    llint n, c = 0, c1 = 0, c2 = 0, flag = 0, c3 = 0, p;
    cin >> n;
    vector<llint> a;
    for (llint i = 0; i < n; i++)
    {
        cin >> p;
        a.pb(p);
    }
    for (llint i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }
        else if (a[i] == -1)
        {
            c1 = 1;
            c3++;
        }
        //         for (llint i = 1; i < v.size(); i++)
        //         {
        //             if (v[i] == v[i - 1])
        //             {
        //                 cnt++;
        //             }
        //             else
        //             {
        //                 maxi = max(maxi, cnt);
        //                 cnt = 1;
        //             }
        //         }
        //         maxi = max(maxi, cnt);
        //         // cout << maxi << " ";

        //         cout << min(n - 2, n - maxi) << "\n";
        //     }
        //     else
        //     {
        //         cout << 0 << "\n";
        //     }
        // }
        else if (a[i] == 1)
        {
            c = 1;
        }
        else
        {
            c2++;
            if (a[i] > 0)
            {
                flag = 1;
            }
            else
            {
                flag = -1;
            }
        }
    }
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        if (c2 > 1)
        {
            cout << "0" << endl;
        }
        else if (c2 == 1 && c3 == 1 && flag == -1)
        {
            cout << "0" << endl;
        }
        //         for (llint i = 1; i < v.size(); i++)
        //         {
        //             if (v[i] == v[i - 1])
        //             {
        //                 cnt++;
        //             }
        //             else
        //             {
        //                 maxi = max(maxi, cnt);
        //                 cnt = 1;
        //             }
        //         }
        //         maxi = max(maxi, cnt);
        //         // cout << maxi << " ";

        //         cout << min(n - 2, n - maxi) << "\n";
        //     }
        //     else
        //     {
        //         cout << 0 << "\n";
        //     }
        // }
        else if (c2 == 1 && c == 1 && flag == 1 && c1 == 0)
        {
            cout << "1" << endl;
        }
        else if (c1 == 1 && c == 1 && c2 == 0)
        {
            cout << "1" << endl;
        }
        else if (c3 == 1 && c == 0 && c2 == 0)
        {
            cout << "1" << endl;
        }
        //         cout << min(n - 2, n - maxi) << "\n";
        //     }
        //     else
        //     {
        //         cout << 0 << "\n";
        //     }
        // }
        else if (c2 == 0 && c == 0 && c1 == 0)
        {
            cout << "1" << endl;
        }
        else if (c1 == 0)
        {
            cout << "1" << endl;
        }
        //         cout << min(n - 2, n - maxi) << "\n";
        //     }
        //     else
        //     {
        //         cout << 0 << "\n";
        //     }
        // }
        else
        {
            cout << "0" << endl;
        }
    }
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}