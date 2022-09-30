/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void aman()
{
    llint n, p, ans = 0;
    cin >> n >> p;
    string s, a = "", b = "";
    cin >> s;
    if (p > n / 2)
    {
        reverse(s.begin(), s.end());
        p = n - p + 1;
    }
    p--;
    llint l = -1, r = -1;
    for (llint i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1] && l == -1)
        {
            l = i;
        }
        if (s[i] != s[n - i - 1])
        {
            r = i;
        }
    }
    // cout << l << " " << r << " " << p << "\n";
    if (l == -1 && r == -1)
    {
        cout << "0";
        return;
    }
    if (l == r && l != -1)
    {
        for (llint i = 0; i < s.length(); i++)
        {
            if (i < s.length() / 2)
            {
                a += s[i];
            }
            else
            {
                b += s[i];
            }
        }
        if (a.length() != b.length())
        {
            b = b.substr(1, b.length());
        }
        reverse(b.begin(), b.end());
        // cout << a << " " << b << "\n";
        // cout << l - p << "\n";
        cout << abs(l - p) + min(abs(b[l] - a[l]), min(b[l] - 'a' + 1 + 'z' - a[l], a[l] - 'a' + 1 + 'z' - b[l]));
        return;
    }
    else
    {
        if (abs(r - p) < abs(p - l))
        {
            ans += abs(r - p);
            for (llint i = 0; i < s.length(); i++)
            {
                if (i < s.length() / 2)
                {
                    a += s[i];
                }
                else
                {
                    b += s[i];
                }
            }
            if (a.length() != b.length())
            {
                b = b.substr(1, b.length());
            }
            reverse(b.begin(), b.end());
            llint cnt = -1;
            // cout << a << " " << b << " " << ans << " \n";
            while (r > -1)
            {
                cnt++;
                if (a[r] != b[r])
                {
                    // cout << "Y";
                    ans += cnt;
                    ans += min(abs(b[r] - a[r]), min(b[r] - 'a' + 1 + 'z' - a[r], a[r] - 'a' + 1 + 'z' - b[r]));
                    cnt = 0;
                    a[r] = b[r];
                }
                r--;

                // cout << a << " " << b << " " << ans << " \n";
            }
        }
        else
        {
            ans += abs(p - l);
            for (llint i = 0; i < s.length(); i++)
            {
                if (i < s.length() / 2)
                {
                    a += s[i];
                }
                else
                {
                    b += s[i];
                }
            }
            if (a.length() != b.length())
            {
                b = b.substr(1, b.length());
            }
            reverse(b.begin(), b.end());
            // cout << a << " " << b << " " << ans << " \n";
            llint cnt = -1;
            while (l < a.length())
            {
                cnt++;
                if (a[l] != b[l])
                {
                    ans += cnt;
                    ans += min(abs(b[l] - a[l]), min(b[l] - 'a' + 1 + 'z' - a[l], a[l] - 'a' + 1 + 'z' - b[l]));
                    cnt = 0;
                    a[l] = b[l];
                }
                l++;

                // cout << a << " " << b << " tj\n";
            }
        }
    }
    cout << ans << "\n";
    // cout << s << " " << p;

    // for (llint i = 0; i < s.length(); i++)
    // {
    //     if (i < s.length() / 2)
    //     {
    //         a += s[i];
    //     }
    //     else
    //     {
    //         b += s[i];
    //     }
    // }
    // if (a.length() != b.length())
    // {
    //     b = b.substr(1, b.length());
    // }
    // reverse(b.begin(), b.end());

    // llint ans = 0, i1 = 1, cnt = 0, ans1 = 0, i2 = -1, cnt1 = 0;
    // while (a != b)
    // {
    //     if (a[p - 1] != b[p - 1])
    //     {
    //         ans += cnt;
    //         ans += min(abs(b[p - 1] - a[p - 1]), min(b[p - 1] - 'a' + 1 + 'z' - a[p - 1], a[p - 1] - 'a' + 1 + 'z' - b[p - 1]));
    //         cnt = -1;
    //         a[p - 1] == b[p - 1];
    //     }
    //     p += i1;
    //     if (p == a.size())
    //     {
    //         i1 = -1;
    //         p -= i1;
    //     }
    //     cnt++;
    //     cout << a << " " << b << "\n";
    // }
    // cout << ans;

    // // cout << a << " " << b << "\n";

    // a e a b c a e z
    // z e a c
}
int main()
{
    fast;
    llint t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}