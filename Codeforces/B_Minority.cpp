#include <bits/stdc++.h>
#define llint long long int
#define all(c) c.begin(), c.end()
using namespace std;
void aman() {
    llint n;
    vector<llint>v;
    string s;
    cin>>s;
    llint a = count(all(s), '0');
    llint b = count(all(s), '1');
    if(a==b){
        cout<<a-1<<"\n";
        return;
    }
    cout<<min(a,b)<<"\n";
}
int main() {
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}