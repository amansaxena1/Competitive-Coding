/*       ¯ಠ_ಠ_/¯        */
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
    llint n , a , b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    llint res = 0, first_counter = 0 , second_counter = 0;;
    string f = "" , sec = "";
    if(b > a)
    {
        f = "10";
        sec = "01";
        first_counter = b;
        second_counter = a;
    }
    else
    {
        sec = "10";
        f = "01";
        first_counter = a;
        second_counter = b;
    }
    while(true)
    {
        auto found = s.find(f);
        if (found != string::npos)
        {
            res += first_counter;
            s.erase(found,2);
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        auto found = s.find(sec);
        if (found != string::npos)
        {
            res += second_counter;
            s.erase(found,2);
        }
        else
        {
            break;
        }
    }
    cout<<res<<"\n";
}
int main() {
    fast;
    llint t=1, n, a;
    // cin >> t;
    while (t--) {
        aman();
    }
    return 0;
}