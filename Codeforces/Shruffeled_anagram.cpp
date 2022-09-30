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
int main()
{
    fast;
    llint t = 1;
    cin >> t;

    for (llint z = 0; z < t; z++)
    {
        llint a = INT_MIN;
        string s, t, p = "";
        cin >> s;
        t = s;
        vector<llint> v(26);
        vector<char> ch;
        cout << "Case #" << z + 1 << ": ";
        for (llint i = 0; i < s.length(); i++)
        {
            v[s[i] - 97]++;
            a = max(v[s[i] - 97], a);
        }
        if (2 * a > s.length())
        {
            cout << "IMPOSSIBLE\n";
        }
        else
        {
            sort(t.begin(), t.end());
            llint i = 0, a = 1, b = 0;
            while (p.length() < s.length())
            {
                a = 1;
                if (t[i + b] != s[i] && t[i + b] != '*')
                {
                    p += t[i + b];
                    t[i + b] = '*';
                }
                else if (t[i + b] == s[i])
                {
                    while (true)
                    {
                        if (t[i + a + b] != s[i])
                        {
                            p += t[i + a + b];
                            t[i + a + b] = '*';
                            break;
                        }
                        else
                        {
                            a++;
                        }
                    }
                }
                else if (t[i] == '*')
                {
                    b++;
                }
                i++;
            }
            cout << p << "\n";
        }

        // for (llint i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
    }

    return 0;
}