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
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        llint n;
        cin >> n;
        string s;
        cin >> s;
        char arr[n][n];
        for (llint i = 0; i < n; i++)
        {
            for (llint j = 0; j < n; j++)
            {
                arr[i][j] = '#';
            }
        }
        llint a = count(s.begin(), s.end(), '2');
        if (a == 1 || a == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        arr[i][j] = 'X';
                    }
                    else if (j > i)
                    {
                        if (s[j] != '1' && s[i] == '2')
                        {
                            arr[i][j] = '+';
                            break;
                        }
                    }
                }
            }

            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < n; j++)
                {
                    if (arr[i][j] != '#' && j > i && arr[i][j] == '+')
                    {
                        arr[j][i] = '-';
                    }
                    else if (arr[i][j] != '#' && j > i && arr[i][j] == '-')
                    {
                        arr[j][i] = '+';
                    }
                }
            }

            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < i; j++)
                {
                    if (s[i] == '2' && s[j] != '1' && arr[i][j] == '#')
                    {
                        arr[i][j] = '+';
                        break;
                    }
                }
            }

            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < n; j++)
                {
                    if (arr[i][j] == '#')
                    {
                        arr[i][j] = '=';
                    }
                }
            }
            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < n; j++)
                {
                    if (i > j && arr[i][j] == '-')
                    {
                        arr[j][i] = '+';
                    }
                    else if (arr[i][j] == '+')
                    {
                        arr[j][i] = '-';
                    }
                }
            }
            cout << "YES\n";
            for (llint i = 0; i < n; i++)
            {
                for (llint j = 0; j < n; j++)
                {
                    cout << arr[i][j];
                }
                cout << "\n";
            }
        }
    }
    return 0;
}