#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    string s, t;
    cin >> s >> t;
    llint i = 0, j = 0, temp = 0, flag = 0, p = s.length(), q = t.length();
    vector<llint> v;
    bool b;

    while (i < p)
    {
        if (s[i] == t[0])
        {
            v.push_back(i);
        }
        i++;
    }

    while (j < v.size())
    {
        i = v[j];
        temp = 0;
        b = false;

        if (i == p)
        {
            b = false;
        }
        else
        {
            for (i; i < p; i++)
            {
                if (temp < q)
                {
                    if (s[i] == t[temp])
                    {
                        temp++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if (temp == q)
            {
                cout << "YES\n";
                return;
            }
            else
            {
                i = i - 2;
                if (i < 0)
                {
                    b = false;
                }
                else
                {
                    flag = 0;
                    for (i; i >= 0; i--)
                    {
                        if (temp < q)
                        {
                            if (s[i] == t[temp])
                            {
                                temp++;
                            }
                            else
                            {
                                flag = 1;
                                b = false;
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (temp == q)
                    {
                        cout << "YES"
                             << "\n";
                        return;
                    }
                    else if (flag == 0)
                    {
                        b = false;
                    }
                }
            }
        }
        if (b == true)
        {
            cout << "YES\n";
            return;
        }
        j++;
    }
    cout << "NO\n";
    return;
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