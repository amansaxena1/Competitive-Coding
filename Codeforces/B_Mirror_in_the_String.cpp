/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman() {
    llint n;
		cin >> n;
		string s;
		cin >> s;
		llint k = n;
		for (llint i = 0; i < n; i++)
		{
			if (s[i] <= s[i + 1])
			{
				k = i;
				// cout << k << endl;
				break;
			}
		}
		if (k < n)
		{
			for (llint i = 0; i <= k; i++)
			{
				cout << s[i];
			}
			for (llint i = k; i >= 0; i--)
			{
				cout << s[i];
			}
		}
		else{
			cout << s;
			reverse(all(s));
			cout << s;
		}
		cout << endl;
}
int main() {
    fast;
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}