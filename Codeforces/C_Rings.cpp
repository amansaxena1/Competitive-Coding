/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint unsigned long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

llint binaryToDecimal(string n)
{
    string num = n;
    llint dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    llint base = 1;

    llint len = num.length();
    for (llint i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

void aman()
{
    string num = "101010010101";
    cout << binaryToDecimal(num) << endl;
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