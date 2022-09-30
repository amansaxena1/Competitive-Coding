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
    string arr[3];
    for (llint i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (llint i = 0; i < 3; i++)
    {
        if (arr[i][1] == '<')
        {
            swap(arr[i][0], arr[i][2]);
        }
    }
    llint ca = 0, cb = 0, cc = 0;
    for (llint i = 0; i < 3; i++)
    {
        if (arr[i][0] == 'A')
        {
            ca++;
        }
        else if (arr[i][0] == 'B')
        {
            cb++;
        }
        else
        {
            cc++;
        }
    }
    if (ca != 2 && cb != 2 && cc != 2)
    {
        cout << "Impossible";
        return;
    }
    if (ca == 0)
    {
        cout << "A";
    }
    else if (cb == 0)
    {
        cout << "B";
    }
    else if (cc == 0)
    {
        cout << "C";
    }

    if (ca == 1)
    {
        cout << "A";
    }
    else if (cb == 1)
    {
        cout << "B";
    }
    else if (cc == 1)
    {
        cout << "C";
    }

    if (ca == 2)
    {
        cout << "A";
    }
    else if (cb == 2)
    {
        cout << "B";
    }
    else if (cc == 2)
    {
        cout << "C";
    }
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