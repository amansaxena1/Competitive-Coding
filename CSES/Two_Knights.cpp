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
    llint n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    llint f = 0;
    for (llint i = n-1; i >=0; i--){
        for (llint j = m-1; j >=0; j--){
            if(i == 0 && j == 0) continue;
            llint a = 0;
            if(i-1 > -1) a += arr[i-1][j];
            if(j-1 > -1) a += arr[i][j-1];

            if(a < arr[i][j]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }        
    for (llint i = 1; i < n;i++){
        if(arr[i][0] > arr[i-1][0]){
            cout<<"NO\n";
            return;
        }
    }
    for (llint i = 1; i < m;i++){
        if(arr[0][i] > arr[0][i-1]){
            cout<<"NO\n";
            return;
        }
    }
    if (arr[0][0] != arr[n - 1][m - 1]){
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            llint sum=0;
            if(i == n-1 || j == m-1) break;

            if(arr[i][j] != arr[i+1][j] + arr[i][j+1]){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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