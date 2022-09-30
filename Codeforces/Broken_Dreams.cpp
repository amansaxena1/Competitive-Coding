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
    cin>>n>>k;
    string s;
    cin >> s;
    if(k==1){
        cout<<s<<endl;
        return;
    }
    map<char, int>mp;
    for (llint i = 0; i < n; i++) mp[s[i]]++;
    string t;
    char ch = 'z';
    for(auto i:mp){
        if(k == 1) break;
        ch = min(ch, i.ff);
        for(int j=0;j<i.ss;j++) t+=i.ff;
        k--;
    }
    string temp;
    char p='z';
    int f = 0;
    for(llint i=0;i<n;i++){
        if(s[i] > ch){
            p = s[i];
            f++;
            break;
        }
    }
    for (int i = n - 1; i >= 0;i--)
    {
        if(s[i] == ch)
            break;
        if(s[i] <= p) {
            temp += s[i];
            s[i] = '1';
        };
    }

    reverse(all(temp));
    t += temp;

    for (llint i = 0; i < n; i++){
        if(s[i] <= ch) continue;
        if(s[i] != '1') t+=s[i];
    }

    cout<<t<<endl;
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