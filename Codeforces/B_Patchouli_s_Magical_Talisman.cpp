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


string helper(llint n){
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
    if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}

void aman() {
    llint n;
    cin>>n;
    vector<llint> v(n);
    for(llint i=0;i<n;i++)
        cin>>v[i];

    llint f = 0;
    for (llint i = 0; i < n; i++){
        if(v[i]%2!=0){
            f = 1;
            break;
        }
    }
    if(f==1){
        llint cnt = 0;
        for (llint i = 0; i < n;i++){
            if(v[i]%2==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    else{
        llint mini = INT_MAX;
        for (llint i = 0; i < n; i++){
            string str = helper(v[i]);
            // cout << str << " ";
            for (llint j = str.size() - 1; j >= 0; j--){
                if(str[j]=='1'){
                    mini = min(mini, (llint)(str.length() -1 - j));
                    // cout << mini << " ";
                    break;
                }
            }
        }
        // cout<<mini<<" ";
        cout<<mini + n - 1<<endl;
    }
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