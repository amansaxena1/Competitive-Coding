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
    cin>>n;
    vector<string> v(n);
    map<char, vector<llint>> mp;
    for(llint i=0;i<n;i++) cin>>v[i];
    
    for(llint i=0;i<n;i++) {
        string carry = "";
        llint st = 0;
        llint f = 0;
        for(llint j=0;j<v[i].size();j++) {
            for(llint k = 0; k<s.size(); k++){
                if(v[i][j] == s[k]) {
                    s[k] = ' ';
                    f=1;
                }
            }
            if(!f){
                for(llint k = st;k<s.size();k++) {
                    
                }
            }
        }
    }
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}