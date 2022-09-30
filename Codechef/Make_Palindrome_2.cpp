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
    llint n;
    cin >> n;
    cin>>s;
    llint a = count(all(s), '0');
    llint b = count(all(s), '1');

    // cout << a <<"-" << b << "\n";
    if(a>b){
        for (llint i = 0; i < a; i++){
            cout<<"0";
        }
    }
    else{
        for (llint i = 0; i < b;i++){
            cout<<"1";
        }
    }
    cout<<"\n";


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