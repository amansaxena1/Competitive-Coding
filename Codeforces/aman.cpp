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
bool isdigit(char ch)
{
    if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
        return true;
    return false;
}
bool checkCycle(int node, unordered_map<int,vector<int>> adj, set<int> &vis, set<int> &dfsVis)
{
    vis.insert(node);
    dfsVis.insert(node);
    for (auto it : adj[node])
    {
        if (vis.find(it)==vis.end())
        {
            if (checkCycle(it, adj, vis, dfsVis))
                return true;
        }
        else if (dfsVis.find(it)!=dfsVis.end()) return true;
    }
    dfsVis.erase(node);
    return false;
}
void dfs(int node, unordered_map<int,vector<int>> adj, unordered_map<int,int> &dp, set<int> &vis)
{
    vis.insert(node);
    for (auto i : adj[node]) {
        if (vis.find(i)==vis.end())
            dfs(i, adj, dp, vis);
        dp[node] = max(dp[node], 1 + dp[i]);
    }
}
int findLongestPath(unordered_map<int,vector<int>> adj, int n)
{
   unordered_map<int,int> dp;

    set<int> vis;
    for (auto i : adj) {
        if (vis.find(i.ff)==vis.end())
            dfs(i.ff, adj, dp, vis);
    }

    int ans = 0;

    for (auto i:adj) {
        ans = max(ans, dp[i.ff]);
    }
    return ans;
}

vector<int> split(string str, char del){
    vector<int> v;
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
void solve()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);
        // 1.{},2.{},3.{1,2}
        unordered_map<int, vector<int>> m;
        ll n = s.size(),N=0;
        vector<string> te;
        int f = 0, x;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                te.pb(temp);
                temp="";
                i++;
            }
            else if(s[i]=='}'){
                te.pb(temp);
                temp="";
                i++;
            }
            else{
                temp+=s[i];
            }
        }
        te.pb(temp);
        //  for(auto i : te){
        //     cout<<i<<"-";
        //  }
        for(int i=0;i<(int)te.size();i+=2){
           if(i%2==0&&te[i+1] != ""){
               m[stoi(te[i])]=split(te[i+1],',');
            }
        }

        // for(auto i : m){
        //     cout<<i.ff<<"--";
        //     for(auto j : m[i.ff]){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
    set<int> vis, dfsVis;
       bool isCycle =false;
        for (auto i : m)
        {
            if (vis.find(i.ff)==vis.end())
            {
                if (checkCycle(i.ff, m, vis, dfsVis))
                {
                    isCycle=true;
                }
            }
        }
        if(isCycle){
            cout<<"error"<<endl;
        }
        else{
            cout<<findLongestPath(m,N)+1<<endl;
        }
    }
}

int main()
{
    fastIO();
    solve();
    return 0;
}
