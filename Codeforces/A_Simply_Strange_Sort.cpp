#include <iostream>
#include <bits/stdc++.h>
#define llint long long int
using namespace std;

void sneha()
{
    long long int n, x, c = 0, ans = 0, flag = 0;
    cin >> n;
    vector<long long int> v, u, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    u = v;
    sort(u.begin(), u.end());
    int i = 1;
    int d = 0;
    if (v == u)
    {
        cout << "0\n";
    }
    else
    {
        while (true)
        {
            c = 0;
            d = 0;
            if (i % 2 != 0)
            {
                for (int j = 0; j < n - 2; j += 2)
                {
                    if (v[j] > v[j + 1])
                    {
                        c++;
                        swap(v[j], v[j + 1]);
                    }
                }
            }
            else
            {
                for (int j = 1; j < n - 1; j += 2)
                {
                    if (v[j] > v[j + 1])
                    {
                        d++;
                        swap(v[j], v[j + 1]);
                    }
                }
            }
            if (u == v)
            {
                break;
            }
            i++;
        }
        cout << i << "\n";
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        sneha();
    }
    return 0;
}