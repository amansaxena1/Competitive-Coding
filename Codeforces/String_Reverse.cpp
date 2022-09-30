/*       ¯ಠ_ಠ_/¯        */
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
    string s,t;
    cin>>s;
    t = s;
    reverse(all(t));
    llint i=0, j=0, c=0;
     while(i<s.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            i++;
            c++;
        }
    }
    cout<<c<<"\n";
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