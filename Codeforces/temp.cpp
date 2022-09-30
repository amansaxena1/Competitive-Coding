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
  llint n, k, temp;
  cin >> n >> k;
  // cout << n << " " << k;
  vector<llint>v(n);
  for (llint i = 0; i < n; i++)
    cin >> v[i];
    
  llint ans = 0;
  for (llint i = 0; i < n; i++)
  {
    set<llint> st;
    for (llint j = i; j < n; j++){
      st.insert(v[j]);
      if(st.size() > k){
        ans = j - i > ans ? j - i : ans;
        break;
      }
      temp = j - i + 1;
    }
  }
  cout << max(ans,temp) << "\n";
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