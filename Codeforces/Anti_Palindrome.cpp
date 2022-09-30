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
    vector<llint>v;
    string s;
    cin >> n >> s;
    if(n%2!=0){
        cout<<"NO\n";
        return;
    }
    map<char,llint>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    for(auto i:m){
        if(i.ss>n/2){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    vector<pair<int, char>> vp;

    string str = "",s1="",s2="";
    for(auto i:m){
        vp.pb(mp(i.ss,i.ff));
        
    }
    sort(all(vp));
    reverse(all(vp));
    for (llint i = 0; i< vp.size(); i++) {
        if(i%2==0){
            while(s1.length()<n/2 && vp[i].ff>0){
                s1+=vp[i].ss;
                vp[i].ff--;
            }
        }
        else{
            while(s2.length()<n/2 && vp[i].ff>0){
                s2+=vp[i].ss;
                vp[i].ff--;
            }
        }
    }
    if(s1.length()!=n/2){
        for(int i=0;i<vp.size();i++){
            while(vp[i].ff>0 && s1.length()<=n/2){
                s1+=vp[i].ss;
                vp[i].ff--;
            }
        }
    }
    if(s2.length()!=n/2){
        for(int i=0;i<vp.size();i++){
            while(vp[i].ff>0 && s2.length()<=n/2){
                s2+=vp[i].ss;
                vp[i].ff--;
            }
        }
    }
    cout << s1 << s2;
    cout << "\n";
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