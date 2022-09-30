#include <bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    vector<llint> v;

    llint a;
    for (llint i = 0; i < 9; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    v[0] = (v[3] - v[1] + (2 * v[5])) / 2;
    v[4] = (v[0] + v[1] + v[2] - v[3] - v[5]);
    v[8] = (v[0] + v[1] + v[2] - v[6] - v[7]);

    for (llint i = 0; i < v.size(); i++)
    {
        if (i % 3 == 0)
        {
            cout << "\n";
        }
        cout << v[i] << " ";
    }
    return 0;
}