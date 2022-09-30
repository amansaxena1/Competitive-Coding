#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define vec vector<llint> v
#define vp vector < pair<llint, llint> v
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

vector<llint> ans;

llint subsequence(string str)
{
    llint cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = str.length(); j > i; j--)
        {
            if (j - i == 26)
            {
                if (str.substr(i, j) == "abcdefghijklmnopqrstuvwxyz")
                {
                    cnt++;
                }
            }
            // string sub_str = str.substr(i, j);
            // for (int k = 1; k < sub_str.length(); k++) {
            //     string sb = sub_str;
            //     sb.erase(sb.begin() + k);
            //     subsequence(sb);
            // }
        }
    }
    return cnt;
}

void aman()
{
    llint n;
    cin >> n;
    string s;
    cin >> s;
    cout << subsequence(s) << "\n";
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}