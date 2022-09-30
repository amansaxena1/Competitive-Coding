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

void helper(int ind, string s, set<string> &ans){
    if(ind == s.length()){
        ans.insert(s);
        return;
    }
    for(int i = ind; i < s.length(); i++){
        if(i != ind && s[ind] == s[i]) continue;
        string temp = s;
        swap(temp[ind], temp[i]);
        helper(ind+1, temp, ans);
    }
}


void aman() {
    string s;
    cin >> s;

    set<string> v;
    sort(all(s));
    helper(0, s, v);
    cout<<v.size()<<"\n";
    // sort(all(v));
    for (auto i:v) cout<<i<<endl;
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