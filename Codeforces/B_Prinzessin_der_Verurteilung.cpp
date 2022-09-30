#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, p, flag = 0;
    string s;
    cin >> n;
    cin >> s;
    vector<char> v;
    v.push_back('a');
    string ans = "";

    for (llint i = 0; i < n; i++)
    {
        ans = "";
        for (llint j = 0; j < v.size(); j++)
        {
            ans += v[j];
        }
        cout << ans << "\n";
        flag = 0;
        size_t found = s.find(ans);
        if (found == string ::npos)
        {
            break;
        }
        p = v.size() - 1;
        if (v.size() - 1 >= 0)
        {
            if (v[v.size() - 1] == 'z')
            {
                v[v.size() - 1]++;
                if()
                v.push_back('a');
                flag = 1;
            }
        }
        if (p >= 0 && flag == 1)
        {
            while (v[p] >= 'z')
            {
                v[p] = 'a';
                p--;
                if (p < 0)
                {
                    break;
                }
            }
        }
        if (flag == 0)
        {
            v[v.size() - 1]++;
        }
    }
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << "\n";
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