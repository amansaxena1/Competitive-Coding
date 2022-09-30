#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman() {
    llint n;
    cin >> n;
    if(n%7==0)
        cout << n << "\n";
        else{
            for (int i = n%10; i >=0;i--){
                if((n - n%10 + i)%7==0){
                    cout<<n - n%10 + i<<"\n";
                    return;
                }
            }
            for(int i = n%10; i <= 9;i++){
                if((n - n%10 + i)%7==0){
                    cout<<n - n%10 + i<<"\n";
                    return;
                }
            }
        }
}
int main() {
    llint t=1, n, a;
    cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}