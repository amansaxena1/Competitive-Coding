// // #include <bits/stdc++.h>
// // #define llint long long int
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define ss second
// // #define all(c) c.begin(), c.end()
// // #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
// // using namespace std;
// // void aman() {
// //     llint n, m,a,b;
// //     cin >> n >> m;
// //     vector<pair<llint,llint>>points(m),ans;
// //     map<llint, llint> mpp;
// //     for (llint i = 0; i < m; i++)
// //     {
// //         cin >> a >> b;
// //         mpp[a] = i + 1;
// //         points[i] = mp(b,a);
// //     }
// //     sort(all(points));

// //     llint cost = 0;
// //     for (llint i = 0; i < 2*n;i++){
// //         cost += points[i].ff;
// //         ans.pb(mp(points[i].ss,points[i].ff));
// //     }
// //     // cout<<cost<<endl;
// //     // for(auto i:ans) cout<<i.ff<<" ---- "<<i.ss<<endl;
// //     sort(all(ans));
// //     cout << cost << "\n";
// //     for (llint i = 0; i < n;i++)
// //     {
// //         cout << mpp[ans[i].ff]<<" " << mpp[ans[ans.size()-i-1].ff]<< "\n";
// //     }
// //     cout << "\n";
// // }
// // int main() {
// //     fast;
// //     llint t=1, n, a;
// //     cin >> t;
// //     while (t--) {
// //         aman();
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// #define llint long long int
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
// using namespace std;
// void aman(llint a, vector<llint>v) {
//     vector<llint> ans(a);
//     for (llint i = 0;i<a;i++)
//     {
//         ans[v[i]-1] = i+1;
//     }
//     for (llint i = 0; i < a;i++)
//     {
//         cout << ans[i] << " ";
//     }
// }
// int main() {
//     fast;
//     llint t=1, n, a;
//     // cin >> t;
//     while (t--) {
//         vector<llint> a = {2,3,1};
//         aman(3,a);
//     }
//     return 0;
// }




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


void leftrotate(string &s){
    llint d = 1;
    reverse(s.begin(), s.begin()+d);
	reverse(s.begin()+d, s.end());
	reverse(s.begin(), s.end());
}

void aman(llint a, llint b, string s, string t) {
    
    int shift = 0, cnt=0, maxi = 0;
    vector<pair<llint, llint>> v;
    for (llint i = 0; i<s.size(); i++){
        cnt = 0;
        
        for (llint j = 0; j<t.size(); j++)
        {
            if (s[j] == t[j]){
                cnt++;
            }
            else{
                cnt2++;
            }
        }
        v.pb(mp(cnt,i));
        leftrotate(s);
    }

    

    sort(all(v));
    maxi = v[v.size()-1].ff;
    llint ans = 0;
    for (llint i = 0; i < v.size();i++)
    {
        if(v[i].ff == maxi){
            ans = v[i].ss;
            break;
        }
    }
    llint p = ans;
    ans *= a;
    ans += (s.size() - maxi)*b;
    cout << ans << "\n";
}
int main() {
    fast;

    llint t=1, a = 2, b= 3;
    string p = "aaabc", q = "aabbk";
    aman(a, b, p, q);
    return 0;
}