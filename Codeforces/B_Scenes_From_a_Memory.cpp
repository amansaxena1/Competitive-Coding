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
    llint n;
    string s;
    cin >> n >> s;
    llint c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << "1\n1\n";
            return;
        }
        else if (s[i] == '4')
        {
            cout << "1\n4\n";
            return;
        }
        else if (s[i] == '6')
        {
            cout << "1\n6\n";
            return;
        }
        else if (s[i] == '8')
        {
            cout << "1\n8\n";
            return;
        }
        else if (s[i] == '9')
        {
            cout << "1\n9\n";
            return;
        }
        else if (s[i] == '2')
        {
            c2++;
        }
        else if (s[i] == '3')
        {
            c3++;
        }
        else if (s[i] == '5')
        {
            c5++;
        }
        else if (s[i] == '7')
        {
            c7++;
        }
    }
    if (c2 > 1)
    {
        cout << "2\n";
        cout << "22\n";
        return;
    }
    else if (c7 > 1)
    {
        cout << "2\n";
        cout << "77\n";
        return;
    }
    else if (c5 > 1)
    {
        cout << "2\n";
        cout << "55\n";
        return;
    }

    else if (c3 > 1)
    {
        cout << "2\n";
        cout << "33\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            if (c5 > 0)
            {
                cout << "2\n";
                cout << "25\n";
                return;
            }
            else if (c7 > 0)
            {
                cout << "2\n";
                cout << "27\n";
                return;
            }
        }
        if (s[i] == '3')
        {
            if (c5 > 0)
            {
                cout << "2\n";
                cout << "35\n";
                return;
            }
            else if (c2 > 0)
            {
                cout << "2\n";
                cout << "32\n";
                return;
            }
        }
        if (s[i] == '5')
        {
            if (c2 >= 1)
            {
                cout << "2\n";
                cout << "52\n";
                return;
            }
            else if (c7 >= 1)
            {
                cout << "2\n";
                cout << "57\n";
                return;
            }
        }
        if (s[i] == '7')
        {
            if (c5 >= 1)
            {
                cout << "2\n";
                cout << "75\n";
                return;
            }
            else if (c2 >= 1)
            {
                cout << "2\n";
                cout << "72\n";
                return;
            }
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