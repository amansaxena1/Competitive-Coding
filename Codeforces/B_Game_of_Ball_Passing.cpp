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
    llint n,sum=0;
    cin>>n;
    vector<llint> v(n);

    // multiset<llint> st;
    // multiset<int, greater<int> > rst;
    for(llint i=0;i<n;i++) {
        cin >> v[i];
        sum += v[i];
        // if(v[i] > 0) {
        //     st.insert(v[i]);
        //     rst.insert(v[i]);
        // }
    }
    sort(all(v));
    if(count(all(v),0) == n) {
        cout << "0\n";
        return;
    }
    if(v[v.size()-1] > sum - v[v.size()-1]){
        cout<<v[v.size()-1] - (sum - v[v.size()-1])<<"\n";
        return;
    }
    cout << "1\n";

    // for (auto i = st.begin(); i != st.end(); ++i) {
    //     cout << *i << " ";
    // }
    // cout << "\n";
    // for (auto i = rst.begin(); i != rst.end(); ++i) {
    //     cout << *i << " ";
    // }
    // cout << "\n\n";
    // while(st.size()>1){
    //     llint p = *st.begin();
    //     llint q = *rst.begin();
    //     llint a = q - p;
    //     rst.erase(rst.lower_bound(q));
    //     rst.erase(p);
    //     st.erase(p);
    //     st.erase(rst.lower_bound(q));
    //     if(a > 0){
    //         st.insert(a);
    //         rst.insert(a);
    //     };
        // for (auto i = st.begin(); i != st.end(); ++i) {
        //     cout << *i << " ";
        // }
        // cout << "\n";
        // for (auto i = rst.begin(); i != rst.end(); ++i) {
        //     cout << *i << " ";
        // }
        // cout << "\n\n";
    //}
    // if(st.size()){
    //     cout << *(st.begin()) << "\n";
    //     return;
    // }
    // cout << "1\n";
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