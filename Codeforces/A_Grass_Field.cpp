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
    llint a , b,c,d;
    cin>>a>>b>>c>>d;
    if(a==1 || b==1 || c==1 || d==1){
        if((a==1&&d==1) && (c==1&&b==1)){
            cout<<"2\n";
        }

        else{
            cout << "1\n";
        }
    }
    else
        cout<<"0\n";
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