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
    string s;
    cin>>s;
    llint cnt = 0;
    for (llint i = 0; i < n;i++){
        if(s[i] == '0'){
            if(i-1 >= 0){
                if(s[i-1] != '1')
                    cnt++;
                else
                    s[i-1] = '2';
            }
            if(i+1 <= n-1){
                if(s[i+1] != '1')
                    cnt++;
                else
                    s[i+1] = '2';
            }
        }
    }
    cout<<cnt<<"\n";
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