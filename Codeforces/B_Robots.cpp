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

void execute(llint ind, vector<string> inp, stack<vector<string, llint>> &st){
    
}

void aman() {
    llint n;
    cin>>n;
    vector<string> inp;
    for (llint i = 0; i < n; i++){
        string s;
        getline(cin, s);
        inp.pb(s);
    }
    stack<vector<string, llint>> st;
    execute(0, inp, st);
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}