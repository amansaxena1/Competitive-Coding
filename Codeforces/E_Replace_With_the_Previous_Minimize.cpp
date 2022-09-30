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
    llint n, k;
    string s;
    cin>>n>>k;
    cin>>s;
    llint spend = 0;
    for(llint i=0;i<n;i++){
        if(s[i] - 'a' <=  k){
            spend = max(spend, (llint)(s[i] - 'a'));
            s[i] = 'a';
        }
        else break;
    }
    for (llint i = 0; i < n;i++) if(s[i] - 'a' <= spend) s[i] = 'a'; 
    llint left = k - spend;
    char ele = 'a';
    char final = 'a';
    for (llint i = 0; i < n; i++)
    {
        if(s[i] != 'a'){
            ele = s[i];
            final = s[i] - left;
            break;
        }
    }
    for (llint i = 0; i < n;i++) if(s[i] != 'a' && s[i] <= ele && s[i] >= final) s[i] = final;
    cout << s << "\n";
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