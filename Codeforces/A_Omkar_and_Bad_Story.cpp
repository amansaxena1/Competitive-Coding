#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint n, a;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (llint i = 0; i < v.size(); i++)
    {
        for (llint j = 0; j < v.size(); j++)
        {
            if (find(v.begin(), v.end(), abs(v[i] - v[j])) == v.end() && i != j)
            {
                v.push_back(abs(v[i] - v[j]));
                if (v.size() > 300)
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
                i = -1;
                break;
            }
        }
    }
    cout << "YES"
         << "\n";
    cout << v.size() << "\n";
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}