#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    string s, a = "", b = "";
    cin >> s;
    for (llint i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            a += s[i];
        }
        else
        {
            b += s[i];
        }
    }
    int ao = count(a.begin(), a.end(), '1');
    int bo = count(b.begin(), b.end(), '1');
    if (ao > bo)
    {
        for (llint i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0 && s[i] == '?')
            {
                s[i] = '1';
            }
            else if (i % 2 != 0 && s[i] == '?')
            {
                s[i] = '0';
            }
        }
    }
    else
    {
        for (llint i = 0; i < s.length(); i++)
        {
            if (i % 2 != 0 && s[i] == '?')
            {
                s[i] = '1';
            }
            else if (i % 2 == 0 && s[i] == '?')
            {
                s[i] = '0';
            }
        }
    }
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