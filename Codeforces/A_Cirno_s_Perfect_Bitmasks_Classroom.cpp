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


string helper(int n){
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
    if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}

void aman() {
    llint n;
    cin>>n;
    string str = helper(n);
    string p = "";
    for(int i=0;i<str.size();i++) p += '0';
    
    for (llint i = str.length() - 1; i >= 0; i--){
        if(str[i] == '1'){
            p[i] = '1';
            break;
        }
        else p[i] = '0';
    }
    int f = 0;
    if(count(all(str), '1') > 1) f = 1;
    else{
        for (llint i = str.size()-1; i >=0 ; i--){
            if(p[i]!='1'){
                f = 1;
                p[i] = '1';
                break;
            }
        }
    }
    if(f == 0) p = "1" + p;
    llint ans = 0;
    for (llint i = p.size()-1; i >=0 ; i--){
        if(p[i]=='1') ans += (llint)pow(2, p.length()-i-1);
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