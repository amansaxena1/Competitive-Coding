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
string aman() {
    string s;
    getline(cin, s);
    string a="",b="",c="";
    llint f = 0;
    for (llint i = 0; i < s.length();i++){
        if(s[i] == ' ');
        else if(s[i] == '*') f++;
        else if(s[i] == '=') f++;
        else if(f==0) a+=s[i];
        else if(f==1) b+=s[i];
        else if(f==2) c+=s[i];
    }
    llint ai = 0, ci = 0;
    for (llint i = 0; i < a.size(); i++){
        if(a[i] == '?'){
            ai = i;
            break;
        }
    }
    for (llint i = 0; i < c.size(); i++){
        if(c[i] == '?'){
            ci = i;
            break;
        }
    }
    string ans = "";
    for (llint i = 0; i <= 9;i++){
        for (llint j = 0; j <= 9;j++){
            a[ai] = '0'+i;
            c[ci] = '0'+j;
            if(stoi(a) * stoi(b) == stoi(c)){
                ans = to_string(i) + " " + to_string(j);
                return ans;
            }
        }
    }
    return s;
}
int main() {
    fast;
    cout<<aman();
    return 0;
}