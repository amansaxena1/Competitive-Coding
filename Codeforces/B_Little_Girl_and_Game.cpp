#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    llint a = 0;
    for (auto i : m)
    {
        // cout << i.first << "    " << i.second<< endl;
        if (i.second % 2 != 0)
        {
            a++;
        }
    }
    if (a == 0 || (a % 2 != 0))
    {
        cout << "First"
             << "\n";
    }
    else
    {
        cout << "Second"
             << "\n";
    }
    return;
}
int main()
{
    aman();
    return 0;
}