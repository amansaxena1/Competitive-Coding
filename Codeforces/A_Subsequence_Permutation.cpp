#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, c = 0;
    string s, t;
    cin >> n;
    cin >> s;
    t = s;
    sort(t.begin(), t.end());
    for (llint i = 0; i < t.length(); i++)
    {
        if (s[i] != t[i])
        {
            c++;
        }
    }
    cout << c << "\n";
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