#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, a;
    cin >> t;
    while (t--)
    {
        long long int n, k, a, b;
        cin >> n >> k;
        vector<long long int> v(n, 0);
        for (long long int i = 0; i < n - 1; i++)
        {
            cin >> a >> b;
            v[a - 1]++;
            v[b - 1]++;
        }
        sort(v.begin(), v.end());
        for (long long int i = 0; i < n; i++)
        {
            if (v[i] > k)
            {
                cout << n - i << "\n";
                break;
            }
        }
        cout << "0\n";
    }
    return 0;
}