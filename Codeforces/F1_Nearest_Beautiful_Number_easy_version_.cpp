/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void aman() {
    llint n,k,t;
    cin >> n >> k;
    string s = to_string(n);
    if(k==1){
        t = n;
        set<int> s;
        while(t!=0){
            s.insert(t % 10);
            t = t / 10;
        }
        if(s.size()==1){
            cout << n << "\n";
        }
    }
    else{
        t = n;
        set<int> s;
        while(t!=0){
            s.insert(t % 10);
            t = t / 10;
        }
        if(s.size()==1){
            cout << n << "\n";
        }
    }
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