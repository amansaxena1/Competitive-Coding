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
    llint r,c;
    cin >> r >> c;
    char arr[(2*r) + 1][(2*c) + 1];

    for(llint i = 0; i <= (2*r); i++) {
        for(llint j = 0; j <= (2*c); j++) {
            if(i%2==0){
                if(j%2==0){
                    arr[i][j] = '+';
                }
                else{
                    arr[i][j] = '-';
                }
            }
            else{
                if(j%2==0){
                    arr[i][j] = '|';
                }
                else{
                    arr[i][j] = '.';
                }
            }
        }
    }
    arr[0][0] = arr[0][1] = arr[1][0] = arr[1][1] = '.';
    for (llint i = 0;i<=2*r;i++){
        for (llint j = 0;j<=2*c;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main() {
    fast;
    llint t=1, n, a=1;
    cin >> t;
    while (t--) {
        cout<<"Case #"<<a<<":\n";
        aman();
        a++;
    }
    return 0;
}