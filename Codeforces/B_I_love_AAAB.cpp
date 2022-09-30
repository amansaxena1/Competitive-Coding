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
    cin >> s;
    if(count(all(s), 'A') == 0 || count(all(s), 'B') == 0 ){
        cout << "NO" << endl;
        return;
    }
    // if(count(all(s), 'B') > count(all(s), 'A')){
    //     cout << "NO" << endl;
    //     return;
    // }
    llint cnt = 0;
    for (llint i = 0; i < s.length(); i++)
    {

        if(s[i] == 'A') cnt++;
        else cnt--;
        if(cnt < 0){
            cout << "NO" << endl;
            return;
        }
    }
    if(s[s.length()-1] == 'A'){
        cout << "NO" << endl;
        return;
    }
    cout<<"YES\n";
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