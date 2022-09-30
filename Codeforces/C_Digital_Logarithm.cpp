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
    cin >> n;
    vector<llint>v(n), u(n);
    map<llint, llint> a,b;
    priority_queue<llint> pq,pq2;
    for (llint i = 0; i < n; i++) {
        cin >> v[i];
        a[v[i]]++;
        pq.push(v[i]);
    }
    for (llint i = 0; i < n; i++) {
        cin >> u[i];
        if(a[u[i]] > 0){
            a[u[i]]--;
        }
        else{
            pq2.push(u[i]);
            b[u[i]]++;
        }
        // if(a[u[i]]==0) a.erase(u[i]);
    }
    llint ans = 0;
    while(pq.size() && pq2.size()){
        if(pq2.top() == pq.top()){
            a[pq.top()]--;
            // if(a[pq.top()]==0) a.erase(pq.top());
            b[pq.top()]--;
            // if(b[pq.top()]==0) b.erase(pq.top());
            pq.pop();
            pq2.pop();
        }
        else if(pq2.top() > pq.top()){
            llint ele = pq2.top();
            pq2.pop();
            if(b[ele] > 0){
                if(a[ele] > 0){
                    b[ele]--;
                    a[ele]--;
                    // if(a[ele]==0)
                    //     a.erase(ele);
                }
                else{
                    ans++;
                    b[ele]--;
                    // if(b[ele]==0)
                    //     b.erase(ele);
                    ele = log10(ele) + 1;
                    if(a[ele] > 0){
                        a[ele]--;
                        // if(a[ele]==0)
                        //     a.erase(ele);
                    }    
                    else{
                        pq2.push(ele);
                        b[ele]++;
                    }
                }
            }
        }
        else{
            llint ele = pq.top();
            pq.pop();
            if(a[ele] > 0){
                if(b[ele] > 0){
                    b[ele]--;
                    // if(b[ele]==0)
                    //     b.erase(ele);
                }
                else{
                    ans++;
                    a[ele]--;
                    // if(a[ele]==0)
                    //     a.erase(ele);
                    ele = log10(ele) + 1;
                    if(b[ele] > 0){
                        b[ele]--;
                        // if(b[ele]==0)
                        //     b.erase(ele);
                    }    
                    else{
                        pq.push(ele);
                        a[ele]++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
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