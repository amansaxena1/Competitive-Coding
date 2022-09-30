#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, b, sum = 0, flag = 0;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    if (b >= 0)
    {
        sum += (s.length() * (a + b));
    }
    else if (b < 0)
    {
        if (s[0] == '0')
        {
            for (llint i = 1; i < s.length(); i++)
            {
                if (s[i] == '1')
                {
                    flag++;
                }
                else
                {
                    if (flag > 0)
                    {
                        sum += (a * flag) + b;
                    }
                    flag = 0;
                }
            }
            if (flag != 0)
            {
                sum += (a * flag) + b;
                flag = 0;
            }
            sum += (a * count(s.begin(), s.end(), '0')) + b;
        }
        else
        {
            for (llint i = 1; i < s.length(); i++)
            {
                if (s[i] == '0')
                {
                    flag++;
                }
                else
                {
                    if (flag > 0)
                    {
                        sum += (a * flag) + b;
                    }
                    flag = 0;
                }
            }
            if (flag != 0)
            {
                sum += (a * flag) + b;
                flag = 0;
            }
            sum += (a * count(s.begin(), s.end(), '1')) + b;
        }
    }
    cout << sum << "\n";
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