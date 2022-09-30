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


void triangle(llint n, vector<llint> &v) {
    vector<llint> temp;
    temp.clear();
    if(n == 1)
        temp.pb(0);
    else if(n == 2)
        temp.pb(1);
    else if(n % 2 == 0){
        llint a = n - 3, b = n - 1;
        for (llint i = 0; i < n/2; i++){
            temp.pb(b);
            b += a;
            a -= 2;
        }
        vector<llint> h;
        h = temp;
        h.pop_back();
        reverse(all(h));
        temp.insert(temp.end(), h.begin(), h.end());
    }
    else{
        llint a = n - 3, b = n - 1;
        for (llint i = 0; i < (n-1)/2; i++){
            temp.pb(b);
            b += a;
            a -= 2;
        }
        vector<llint> h;
        h = temp;
        reverse(all(h));
        temp.insert(temp.end(), h.begin(), h.end());
    }
    v = temp;
}

void aman() {
    llint n,m;
    cin >> n >> m;
    vector<vector<llint>> v(n,vector<llint>(m));
    for(llint i=0;i<n;i++){
        for(llint j=0;j<m;j++){
            cin >> v[i][j];
        }
    }

    map<llint, vector<pair<llint,llint>>> mp;

    for(llint i=0;i<n;i++){
        for(llint j=0;j<m;j++){
            mp[v[i][j]].pb({i+1,j+1});
        }
    }

    vector<vector<llint>> x,y;

    for(auto i:mp){
        // cout << i.ff << " - ";
        vector<llint> t,s;
        for(auto j:i.ss){
            t.pb(j.ff);
            s.pb(j.ss);
        }
        sort(all(t));
        sort(all(s));
        x.pb(t);
        y.pb(s);
    }


    // for(auto i:mp){
    //     cout<<i.ff<<" - ";
    //     for(auto j:i.ss){
    //         cout<<"("<<j.ff<<","<<j.ss<<") ";
    //     }
    //     cout << "\n";
    // }

    // for(auto i:x){
    //     cout << "x - ";
    //     for(auto j:i){
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    // for(auto i:y){
    //     cout << "y - ";
    //     for(auto j:i){
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    llint ans = 0;

    for (llint i = 0; i < x.size();i++){
        vector<llint> temp;
        triangle(x[i].size(), temp);

        // for (auto f:temp){
        //     cout<<f<<" ";
        // }
        // cout << "\n";

        llint p = 0;
        for (llint j = 1; j < x[i].size(); j++)
        {
            p += temp[j-1] * abs(x[i][j] - x[i][j-1]);
            p += temp[j-1] * abs(y[i][j] - y[i][j-1]);
            // p += temp[j - 1] * abs(((i.ss)[j].ff - (i.ss)[j - 1].ff));
            // p += temp[j - 1] * abs(((i.ss)[j].ss - (i.ss)[j - 1].ss));
        }
        // cout << p << " ";
        ans += p;
    }

    // for(auto i:mp){
    //     vector<llint> temp;
    //     triangle(i.ss.size(), temp);
    //     for(auto j:temp){
    //         cout<<j<<" ";
    //     }
    //     cout << "\n";
    //     llint p = 0;
    //     for (llint j = 1; j < (i.ss).size(); j++)
    //     {
    //         p += temp[j - 1] * abs(((i.ss)[j].ff - (i.ss)[j - 1].ff));
    //         p += temp[j - 1] * abs(((i.ss)[j].ss - (i.ss)[j - 1].ss));
    //     }
    //     cout<<p<<"\n";
    //     ans += p;
    // }
    cout << ans << "\n";
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