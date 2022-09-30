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
int max(int a, int b) {
    return a > b ? a : b;
}
int fun(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    for (int i = 0; i <= N - M; i++){
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
        if (j == M){
           res++;
        }
    }
    return res;
}
void aman() {
    llint n;
    string s;
    llint maxi = 1;
    cin >> n >> s;
    for (llint i = 0; i < n; i++) {
        for (llint j = 0; j < n; j++)
        {
            string str = s.substr(i, j);
            if( fun(str,s)> 1){
                maxi = max(maxi, str.length());
            }
        }
    }
    cout << maxi << "\n";
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