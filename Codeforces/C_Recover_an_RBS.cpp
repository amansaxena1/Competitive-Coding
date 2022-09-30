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


bool check(string str){
    if(str[0] == '?'){
        return true;
    }
    if(str[str.length()-1] == '?'){
        return true;
    }
    return false;
}

bool aman(){
    string str;
    stack<char> st1, st2;
    int co = 0, cc = 0, cq = 0;
    cin>>str;
    
    if (str.size() % 2) return false;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ')') {
            cc++;
            if (st1.empty()) return false;
            else st1.pop();
        }
        else {
            if (str[i] == '?') cq++;
            else co++;
            st1.push(str[i]);
        }
    }
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == '(') {
            if (st2.empty()) return false;
            else st2.pop();
        }
        else st2.push(str[i]);
    }    
    int extra = abs(cc - co);
    if (cq == extra) return true;
    cq-=extra;
    if(cq == 2 && check(str)) return true;
    return false;
}

int main() {
    fast;
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        if(aman()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}