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
    cin>>s;
    llint ind = 1, ind1=0;
    char c = s[ind1];
    string t = "";
    string ans = s.substr(0,1);
    
    
    for (llint i = 1; i < n; i++){
        c = s[ind1];
        if(s[i] < c){
            ans += t;
            ans += s[i];
            t = "";
            ind1 = 0;
        }
        else if(s[i] == c){
            t += s[ind1];
            ind1++;
        }
        else{
            break;
        }
    }    

    for (llint i = 0; i < n + k; i++){
        cout<<ans[i%ans.length()];
    }
    cout<<endl;
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