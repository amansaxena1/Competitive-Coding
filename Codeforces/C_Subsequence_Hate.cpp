// /*       ¯ಠ_ಠ_/¯        */
// #include <bits/stdc++.h>
// #define llint long long int
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
// using namespace std;
// void aman()
// {
//     string s;
//     cin >> s;
//     char st = s[0];
//     llint f = 0, cnt = 0;
//     // for (llint i = 0; i < s.length(); i++)
//     // {
//     //     if (s[i] != st && f == 0)
//     //     {
//     //         f = 1;
//     //     }
//     //     else if (f == 1 && s[i] == st)
//     //     {
//     //         f = 2;
//     //     }
//     // }
//     // if (f != 2)
//     // {
//     //     cout << "0\n";
//     //     return;
//     // }
//     vector<llint> v, u;
//     char c = s[0];
//     for (llint i = 0; i < s.length(); i++)
//     {
//         if (c != s[i])
//         {
//             v.pb(cnt);
//             cnt = 0;
//             c = s[i];
//         }
//         cnt++;
//     }
//     v.pb(cnt);
//     if (v.size() <= 2)
//     {
//         cout << "0\n";
//         return;
//     }
//     u = v;
//     reverse(all(u));
//     llint ans1 = 0, ans2 = 0;
//     llint i = 0, j = 1, k = 2;
//     while (k <= v.size() - 1)
//     {
//         if (v[i] + v[k] > v[j])
//         {
//             ans1 += v[j];
//         }
//         else
//         {
//             ans1 += v[i] + v[k];
//         }
//         v[k] = v[i] + v[k] + v[j];
//         i += 2;
//         j += 2;
//         k += 2;
//     }
//     i = 0;
//     j = 1;
//     k = 2;
//     while (k <= u.size() - 1)
//     {
//         if (u[i] + u[k] > u[j])
//         {
//             ans2 += u[j];
//         }
//         else
//         {
//             ans2 += u[i] + u[k];
//         }
//         u[k] = u[i] + u[k] + u[j];
//         i += 2;
//         j += 2;
//         k += 2;
//     }
//     cout << min(ans1, ans2) << "\n";
//     //     111100000000000111110
// }
// int main()
// {
//     fast;
//     llint t = 1, n, a;
//     cin >> t;
//     while (t--)
//     {
//         aman();
//     }
//     return 0;
// }

/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman()
{
    llint n;
    cin >> n;
    vector<llint> v;
    llint sum = 0, k = 0;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        sum += v[i];
        v.pb(vi);
        if (v[i] % 2 != 0)
        {
            k = i;
        }
    }
    if (sum % 2 == 0)
    {
        cout << n << "\n";
        for (llint i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }
    llint f = 0;
    for (llint i = 3; i < sum; i++)
    {
        if (sum % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << n << "\n";
        for (llint i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << n - 1 << "\n";
        for (llint i = 0; i < n; i++)
        {
            if (i != k)
            {
                cout << i + 1 << " ";
            }
        }
        cout << "\n";
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