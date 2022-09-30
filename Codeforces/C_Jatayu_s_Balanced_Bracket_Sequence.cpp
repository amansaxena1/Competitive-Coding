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
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    set<int> s1;
    int ans = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == '(')
            st.push('(');
        else if (s[i] == ')')
        {
            st.pop();
            if (st.empty())
            {
                ans += s1.size();
                s1.clear();
            }
            else
                s1.insert(st.size());
        }
   }
   
   cout<<ans<<endl;
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