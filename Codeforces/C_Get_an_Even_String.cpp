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
    string s,t="";
    cin >> s;
    llint cnt = 0;
    llint ans = 0;
    map<char, vector<llint>> mpp;
    for (llint i = 0; i < s.length()-1;i+=2){
        if(s[i] != s[i+1]) {
            for (llint j = i; j < s.length();j++){
                mpp[s[j]].pb(j);
                bool f = false;
                for(auto p:mpp){
                    if(p.ss.size() > 1){
                        t += p.ff;
                        t += p.ff;
                        ans += j - i -1;
                        mpp.clear();
                        f = true;
                        break;
                    }
                }
                if(f || j==s.length()-1){
                    i = j-1;
                    break;
                }
            }
        }
        else{
            // cout << i << " " << s[i] << "----";
            t += s[i];
            t += s[i];
        }
        // cout << t << " ";
    }
    cout <<s.length() - t.length() << "\n";
    // cout << t.length() - s.length() << "\n";
    // cout << ans << "\n";
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