// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t = 1, n, a;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, vi;
//         vector<pair<int, int>> v;
//         vector<int> vv, u;
//         cin >> n >> x;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> vi;
//             v.push_back({vi, i});
//             vv.push_back(vi);
//         }
//         u = vv;
//         sort(u.begin(), u.end());
//         if (u == vv || 2 * x <= v.size())
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             sort(v.begin(), v.end());
//             int f = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (abs(v[i].second - i) >= x)
//                 {
//                     continue;
//                 }
//                 else if (v.size() - v[i].second >= x && (v.size() - i >= x || (v.size() >= x && i - 0 >= x)))
//                 {
//                     continue;
//                 }
//                 else if (v[i].second - 0 >= x && (i - 0 >= x || (v.size() >= x && v.size() - i >= x)))
//                 {
//                     continue;
//                 }
//                 else if (v[i].second == i)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     f = 1;
//                     break;
//                 }
//             }
//             if (f)
//             {
//                 cout << "NO\n";
//             }
//             else
//             {
//                 cout << "YES\n";
//             }
//         }
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
    llint n, a;
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