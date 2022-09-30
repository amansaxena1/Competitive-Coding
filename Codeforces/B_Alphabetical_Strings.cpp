#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    string s, ss;
    llint i, j, len = 1;
    char ch = 'b';
    cin >> s;
    ss = s;
    sort(ss.begin(), ss.end());
    for (llint i = 0; i < ss.length() - 1; i++)
    {
        if (ss[i] == ss[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }

    size_t found = s.find("a");
    if (found != string::npos)
    {
        i = found - 1;
        j = found + 1;
        while (true)
        {
            if (s.length() == 1 && s[0] == 'a')
            {
                cout << "YES\n";
                return;
            }
            if (i < 0)
            {
                i = -1;
            }
            if (j >= s.length())
            {
                j = s.length();
            }
            if (i >= 0 && s[i] == ch)
            {
                ch++;
                i--;
                len++;
            }
            else if (j < s.length() && s[j] == ch)
            {
                ch++;
                j++;
                len++;
            }
            else
            {
                cout << "NO\n";
                return;
            }
            if (i == -1 && j == s.length())
            {
                cout << "YES\n";
                return;
            }
        }
    }
    else
    {
        cout << "NO\n";
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