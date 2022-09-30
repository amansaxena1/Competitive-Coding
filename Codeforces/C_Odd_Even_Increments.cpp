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
    vector<llint> v(n),e,o;

    for(llint i=0;i<n;i++){
        cin >> v[i];
        if(i%2==0)
            e.pb(i);
        else
            o.pb(i);
    }
    llint a=0,b=0,c=0,d=0;
    for (llint i = 0; i < n; i++)
    {
        if(i%2==0){
            if(v[i]%2==0) a++;
            else b++;
        }
        else{
            if(v[i]%2==0) c++;
            else d++;
        }
    }
    if((a==0 || b==0) && (c == 0 || d==0)){
        cout<<"YES\n";
        return;
    }
    cout << "NO\n";
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