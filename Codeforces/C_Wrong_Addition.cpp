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
    string a,b,s;
    cin>>a>>s;
    llint ind = a.size()-1, num = 0;
    for (llint i = s.length() - 1; i >= 0; i--){
        if(ind >= 0){
            if(s[i] < a[ind]) b += '0' + ((s[i]-'0') + (s[--i]-'0')*10 - (a[ind]-'0'));
            else b += '0' + (s[i]-'0') - (a[ind]-'0');
            ind--;
        }
        else{
            b+=s[i];
        }
    }
    if(ind >= 0){
        cout<<"-1"<<endl;
        return;
    }
    reverse(all(b));
    int f = 0;

    string ans = "";
    for(llint i=0;i<b.size();i++){
        if(!isdigit(b[i])){
            cout<<"-1"<<endl;
            return;
        }
        if(!f && b[i]!='0'){
            ans = b.substr(i);
            f = 1;
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