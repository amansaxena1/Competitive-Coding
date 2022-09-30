// /*       ¯ಠ_ಠ_/¯        */
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
// void aman() {
//     llint n,a;
//     cin >> n;
//     string s,t;
//     cin >> s >> t;
//     sort(all(s));
//     sort(all(t));
//     string ans="";
//     for (llint i = 0; i < 2*n; i++) ans += "0";
//     llint start=0,end=(2*n)-1;
//     for(llint i=0;i<2*n;i++){
//         if(i%2==0){
//             if(*s.end() > *(t.end()-1)){
//                 ans[end] = (*s.end()-1);
//                 s.erase(s.end()-1);
//                 end--;
//             }
//             else{
//                 ans[start] = *(s.begin());
//                 s.erase(s.begin());
//                 start++;
//             }
//         }
//         else{
//             if(*(t.begin()) < *(s.begin())){
//                 ans[end] = *t.begin();
//                 t.erase(t.begin());
//                 end--;
//             }
//             else{
//                 ans[start] = *(t.end()-1);
//                 t.erase(t.end()-1);
//                 start++;
//             }
//         }
//     }
//     cout << ans<<"\n";
// }
// int main() {
//     fast;
//     llint t=1, n, a;
//     cin >> t;
//     while (t--) {
//         aman();
//     }
//     return 0;
// }







#include <bits/stdc++.h>
#define ll long long int
#define vec vector<long long int>
#define Vec vector<vector<long long int>>
#define vep vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n"
#define inf 1e18;
#define all(a) a.begin(), a.end()
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    sort(all(s1));
    sort(all(s2),greater<char>());
    int i=0,j=n-1;
    int x=0,y=n-1;
    vector<char> v(2*n);
    int k=0,l=2*n-1;
    while(i<=j&&x<=y){
        if(s1[i]<s2[x]){
            v[k]=s1[i];
            k++;
            i++;
            if(s1[i]<s2[x]){
                v[k]=s2[x];
                k++;
                x++;
            }
            else{
                v[l]=s2[y];
                l--;
                y--;
            }
        }
        else if(s1[i]>=s2[x]){
            v[l]=s1[j];
            l--;
            j--;
            if(s1[i]<s2[y]){
                v[k]=s2[x];
                k++;
                x++;
            }
            else{
                v[l]=s2[y];
                l--;
                y--;
            }
        }
    }
    for(char i : v){
        cout<<i;
    }
    cout<<endl;
    }
}
int main()
{
    fastIO();
    solve();
    return 0;
}