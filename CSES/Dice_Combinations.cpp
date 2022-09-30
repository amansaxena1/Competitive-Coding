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

int helper(llint currSum, vector<llint>v, llint req, llint &ans, vector<llint>&store){
    if(currSum == req){
        return 1;
    }
    int temp = 0;
    for (llint i = 0; i < 6; i++){
        if(currSum + v[i] > req) break;
        
        if(store[currSum + v[i]] != -1) temp = (temp + store[currSum+v[i]]) % mod; 
        else temp=(temp+helper(currSum + v[i], v, req, ans,store))%mod;
    }

    return store[currSum] = temp;
}

void aman() {
    vector <llint> v{1,2,3,4,5,6};
    llint n;
    cin>>n;
    llint ans = 0;
    vector <llint> store(n+1, -1);
    helper(0,v,n,ans, store);
    cout << store[0];
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}