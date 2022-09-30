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
    llint l;
    cin>>l;
    string a , b;
    cin>>a>>b;
    sort(all(a));
    sort(all(b));
    set<char> x,y;
    for(int i = 0 ; i < l ; i++)
    {
        x.insert(a[i]);
        y.insert(b[i]);
    }
    int c = 0;
    set<char>::iterator it1,it2;
    for(it1 = x.begin(),it2 = y.begin() ; it1 != x.end() && it2 != y.end() ; )
    {
        if(*it1 == *it2)
        {
            c++;
            it1++;
            it2++;
        }
        else
        {
            if(int(*it1) < int(*it2))
            {
                it1++;
            }
            else
            {
                it2++;
            }
        }
    }
    if(c == 0 || c % 2 != 0)
    {
        cout<<"UNHAPPY";
    }
    else
    {
        cout<<"HAPPY";
    }
    
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