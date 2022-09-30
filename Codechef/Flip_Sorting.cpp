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
    string s;
    cin>>n>>s;
    vector<llint> v;
    for (llint i = n-1; i >=0;i--)
    {
        if(s[i] == '0'){
            v.pb(i);
            for (llint j = 0; j < i;j++) s[j] = '0' + ((s[j]-'0'+1)%2);
        }

    }
    // cout << s << "\n";
    cout << v.size() << "\n";
    for (llint i = 0;i<v.size();i++)
    {
        cout<<"1 "<<v[i]+1<<"\n";
    }
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