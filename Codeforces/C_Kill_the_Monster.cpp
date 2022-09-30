#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman() {
    llint ac,hc,am,hm,k,w,a;
    cin>>hc>>ac>>hm>>am>>k>>w>>a;
    if(hm*am < hc*ac){
        cout<<"YES\n";
        return;
    }
    for (llint i = 0; i <= k; i++){
        if((hc+(i*a))*(ac + (w*(k-i))) >= (hm*am) - ((ac + (w*(k-i))) * am)){
            cout<<"YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main() {
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}