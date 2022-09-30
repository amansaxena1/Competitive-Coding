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
    string s;
    cin>>s;
    map<char, llint> mp;
    for (char c : s) mp[c]++;
    llint a = 0;
    for (llint i = 0; i < mp.size();i++) if (mp[s[i]] % 2 != 0) a++;

    if (a > 1) cout << "NO SOLUTION\n";
    else{
        string t = "";
        for(auto i:mp){
            for(llint j = 0; j < i.ss/2; j++){
                t += i.ff;
            }
        }
        cout << t;
        for(auto i:mp){
            if(i.ss % 2 != 0){
                cout<<  i.ff;
            }
        }
        reverse(all(t));
        cout << t;
    }

}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}