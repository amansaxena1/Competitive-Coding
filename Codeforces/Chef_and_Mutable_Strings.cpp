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
bool check(char a,char b){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
            return true;
        }
    }
    else{
        if(!(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')){
            return true;
        }
    }
    return false;

}
void aman() {
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
    {
        cout<<"No";
        return;
    }
    for (llint i = 0;i<s.length();i++)
    {
        if(!check(s[i],t[i]))
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes\n";
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