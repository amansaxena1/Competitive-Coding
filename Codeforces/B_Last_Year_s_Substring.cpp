#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n;
    string s;
    cin >> n;
    cin >> s;
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
    {
        cout << "YES"
             << "\n";
        return;
    }
    else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[s.length() - 1] == '0')
    {
        cout << "YES"
             << "\n";
        return;
    }
    else if (s[0] == '2' && s[1] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
    {
        cout << "YES"
             << "\n";
        return;
    }
    else if (s[0] == '2' && s[s.length() - 3] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
    {
        cout << "YES"
             << "\n";
        return;
    }
    else if (s[s.length() - 4] == '2' && s[s.length() - 3] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
    {
        cout << "YES"
             << "\n";
        return;
    }
    else
    {
        cout << "NO"
             << "\n";
    }
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