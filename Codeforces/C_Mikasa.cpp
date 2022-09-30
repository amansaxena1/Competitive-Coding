#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int i = 0, mini = INT_MAX;
        for (int i = 1; i < 10000; i++)
        {
            mini = min((n ^ (m + i)), mini);
        }
        cout << mini << "\n";
    }
    return 0;
}