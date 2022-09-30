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
    llint n, ans=0, left;
    string s;
    cin >> n >> s;
    left = n;
    int f = 0;
    for(llint i=0;i<n-1;i++){
        if(s[i] == ')'){
            bool a = false;
            for (llint j = i + 1; j < n; j++){
                if(s[j] == ')'){
                    ans++;
                    a = true;
                    i = j;
                    left = n - 1 - j;
                    break;
                }
            }
            if(!a){
                break;
            }
        }
        else{
            if(i != n-1){
                left-=2;
                i++;
                ans++;
            }
        }
    }
    cout << ans <<" "<< left<< "\n";
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