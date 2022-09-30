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
    string s, t;
    cin >> s >> t;
    map<llint, llint> sm, tm;
    for (llint i = 0; i < s.length(); i++)
    {
        sm[s[i]]++;
    }
    for (llint i = 0; i < t.length(); i++)
    {
        tm[t[i]]++;
    }
    // vector<pair<char, llint>> vs, vt;
    // for (auto itr = tm.begin(); itr != tm.end(); itr++)
    // {
    //     cout << itr->ff << " " << itr->ss << "\n";
    // }
    // cout << "\n\n";
    // for (auto itr = sm.begin(); itr != sm.end(); itr++)
    // {
    //     cout << itr->ff << " " << itr->ss << "\n";
    // }

    llint flag = 0;
    for (auto itr = tm.begin(); itr != tm.end(); itr++)
    {
        if (itr->ss > (sm.find(itr->ff))->ss)
        {
            cout << "need tree";
            return;
        }
        if (itr->ss != (sm.find(itr->ff))->ss)
        {
            flag = 1;
        }
    }
    llint at = 0, ar = 0;
    if (t.length() < s.length())
    {
        at = 1;
    }
    if (flag == 0 && tm.size() > 1)
    {
        ar = 1;
    }
    if (at == 1 && ar == 1)
    {
        cout << "both";
        return;
    }
    if (at == 1)
    {
        cout << "automaton";
        return;
    }
    if (ar == 1)
    {
        cout << "array";
        return;
    }
    cout << "need tree";
    return;
}
int main()
{
    fast;
    llint t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}