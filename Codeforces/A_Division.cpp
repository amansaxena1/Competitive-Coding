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
    cin>>n;
    if(n<=1399){
        cout << "Division 4\n";
    }
    else if(n<=1599){
        cout << "Division 3\n";
    }
    else if(n<=1899){
        cout << "Division 2\n";
    }
    else{
        cout << "Division 1\n";
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