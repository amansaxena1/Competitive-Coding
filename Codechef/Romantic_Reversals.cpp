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
    llint n,k;
    vector<llint>v;
    string s;
    cin>>n>>k;
    cin >> s;
    string ans="",t = s.substr(0,k);
    llint a = 0;
    // cout << t<<"\n";
    for(llint i=0;i<t.length();i++)
    {
        if(i%2==0){
            ans += t[a];
        }
        else{
            ans+=t[t.length()-1-a];
            a++;
        }
    }
    
    reverse(all(ans));
    
    for (llint i = k; i < s.length(); i++)
    {
        ans+=s[i];
    }
    
    // ans = ans + s.substr(k+1,s.length());
    cout << ans << "\n";
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