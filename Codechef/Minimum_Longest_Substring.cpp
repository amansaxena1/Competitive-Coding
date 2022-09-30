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
    llint n;
    string s;
    cin >> n >> s;
    llint z = count(all(s), '0');
    llint o = count(all(s), '1');
    llint zz = z;
    llint oo = o;
    for (llint i = 0; i < n;i++)
    {
        if(i%2==0){
            if(o > 0){
                cout << "1";
                o--;
            }
            else{
                cout << "0";
                z--;
            }
        }
        else{
            if(z > 0){
                cout << "0";
                z--;
            }
            else{
                cout << "1";
                o--;
            }
        }
    }
    cout << "\n";
    z = zz;
    o = oo;
    for (llint i = 0; i < n;i++)
    {
        if(i%2!=0){
            if(o > 0){
                cout << "1";
                o--;
            }
            else{
                cout << "0";
                z--;
            }
        }
        else{
            if(z > 0){
                cout << "0";
                z--;
            }
            else{
                cout << "1";
                o--;
            }
        }
    }


    cout<<"\n";
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