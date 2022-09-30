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
void aman() {
    llint n,a,sum=0;
    cin >> n;
    vector<llint> v(n);
    map<llint, llint> mp;
    for(llint i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
        sum += a;
    }
    queue<llint>q;
    q.push(sum);
    llint cnt = n;
    while(q.size() != 0 && cnt > 0){
        llint p = q.front();
        q.pop();
        if(mp[p] > 0){
            mp[p]--;
            cnt--;
            continue;
        }
        if(p == 1 || q.size() > cnt || mp.begin()->ff > p){
            cout<<"NO"<<endl;
            return;
        }
        llint a = ceil(p / 2.0);
        llint b = floor(p / 2.0);
        if(a == 0 || b == 0){
            cout<<"NO"<<endl;
            return;
        }
        if(mp[a] > 0){
            mp[a]--;
            cnt--;
        }
        else if(a == 1){
            cout<<"NO"<<endl;
            return;
        }
        else{
            q.push(a);
        }
        if(mp[b] > 0){
            mp[b]--;
            cnt--;
        }
        else if(a == 1){
            cout<<"NO"<<endl;
            return;
        }
        else{
            q.push(b);
        }
    }
    cout<<"YES"<<endl;
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