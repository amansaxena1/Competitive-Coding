/*       ¯ಠ_ಠ_/¯        */
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
    llint n,a;
    cin >> n;
    priority_queue<llint> pq;
    vector<llint> arr{100000, 0};
    for(llint i = 0 ; i < n ; i++)
    {
        llint vi;
        cin >> vi;
        arr[vi]++;
    }
    unordered_map<int, int> arr;
    int vi;
    for(llint i = 0 ; i < n ; i++)
    {
        cin >> vi;
        arr[v[i]]++;
    }
    cin>>a;
    for(llint i = 0 ; i < a ; i++)
    {
        char x;
        llint y;
        cin >> x >> y;
        llint ans = 0;
        if(x == '+')
        {
            arr[v[i]]++;
        }
        else
        {
            arr[v[i]]--;
        }
        
    }
    string s;
    
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}