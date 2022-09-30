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
    vector<llint> v(n);
    llint a = n;
    for (llint i = n-1; i >= 0; i--){
        if(i == n-1)
            v[i] = a--;
        else if(i == n-2)
            v[i] = a--;
        else{
            if(n%2==0){
                v[0] = 1;
                for(llint i=1; i<n-3; i++){
                    v[i] = n-2-i;
                }
            }
            else{
                for(llint i=0; i<n-3; i++){
                    v[i] = n-2-i;
                }
            }
        }
        
    }
    for (llint i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
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