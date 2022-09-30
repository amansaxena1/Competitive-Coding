#include <bits/stdc++.h>
#define llint unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

set<llint> st;
vector<llint> v;
void makeFun(){
    llint i = 0;
    while(true){
        if(pow(2,i) >= 1000000000001) break;
        st.insert(pow(2,i));
        i++;
    }
    i = 2;
    llint num = 1;
    while(true){
        num = num * i;
        st.insert(num);
        i++;
        if(num >= 1000000000001) break;
    }
}

llint check(llint n){
    if(st.find(n) != st.end()) return 1;
    auto lb = st.lower_bound(n);
    lb--;
    return 1 + check(n -= *(lb));
}

void aman() {
    llint n;
    cin >> n;
    llint cnt = 0;
    if(n%2 != 0) {
        cnt++;
        n--;
    }
    n = check(n);
    // cout << n << " ";
    cout << cnt + n << "\n";
}
int main() {
    fast;
    llint t=1, n, a;
    cin >> t;
    makeFun();
    // for(auto i:st)
    //     cout << i << " ";
    while (t--) {
        aman();
    }
    return 0;
}