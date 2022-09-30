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

vector<llint> split(string str, char del){
    vector<llint> v;
    string temp = "";   
    for(int i=0; i<(int)str.size(); i++){
    if(str[i] != del) temp += str[i];
        else{
            v.pb(stoi(temp));
            temp = "";
        }
    }   
    v.pb(stoi(temp));
    return v;
}

void aman() {
    llint n;
    cin >> n;
    string k;
    vector<string>v(n);
    for (llint i = 0; i < n; i++) cin >> v[i];
    string g;
    cin >> g;
    vector<llint> groups = split(g, ',');

    vector<llint> priority;
    if(groups.size() % 2 == 0){
        llint mid = ceil(groups.size()/2.0);
        for (llint i = mid;i<groups.size();i++) priority.pb(groups[i]);
        for (llint i = mid-1;i>=0;i--) priority.pb(groups[i]);
    }
    else{
        llint mid = floor(groups.size() / 2);
        for (llint i = mid;i<groups.size();i++) priority.pb(groups[i]);
        for (llint i = mid-1;i>=0;i--) priority.pb(groups[i]);
    }

    vector<pair<llint, vector<llint>>>ans(n,{0, vector<llint>(0,0)});

    for (llint i = 0; i<n; i++) ans[i].ff = count(all(v[i]), '_');
    
    for (llint i = 0; i < priority.size(); i++){
        for (llint j = 0; j < ans.size(); j++){
            if (priority[i] <= ans[j].ff){
                ans[j].ss.pb(i + 1);
                ans[j].ff -= priority[i];
                break;
            }
        }
    }
    
    vector<vector<llint>> gh;
    for (llint i = 0; i < ans.size(); i++){
        vector<llint> temp;
        for(llint j = 0; j < ans[i].ss.size(); j++){
            for (llint k = 0;k<priority[ans[i].ss[j]-1];k++)
                temp.pb(ans[i].ss[j]);
        }
        gh.pb(temp);
    }

    vector<vector<string>> ans2(n, vector<string>(0));

    for (llint i = 0; i < v.size();i++){
        llint ind = 0;
        for (llint j = 0; j < v[0].size();j++){
            if(v[i][j] == 'X'){
                ans2[i].pb("X");
            }
            else{
                if(ind >= gh[i].size()){
                    ans2[i].pb("_");
                }
                else{
                    ans2[i].pb(to_string(gh[i][ind]));
                    ind++;
                }
            }
        }
    }

    for (llint i = 0;i<ans2.size();i++){
        for (llint j = 0; j < ans2[i].size(); j++){
            cout<<ans2[i][j];
        }
        cout << "\n";
    }
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}