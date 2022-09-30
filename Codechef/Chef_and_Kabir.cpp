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
    llint n,a;
    vector<llint>v{26,0};
    string s;
    cin>>n;
    cin>>s;
    map<char, llint> mp;
    for(llint i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    llint maxi = INT_MIN;
    char ch;
    for(auto i:mp)
    {
        if(i.ss > maxi)
        {
            ch = i.ff;
            maxi = i.ss;
        }
    }
    cout<<maxi<<" "<<ch<<"\n";
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