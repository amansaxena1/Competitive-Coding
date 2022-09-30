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
    int m = 4;
    string arr1[m]={"apphe","goava","pomegranate","pip"};
    int arr[m][2]={{3,11},{1,20},{8,0},{2,18}};
    for(int i=0;i<m;i++)
    {
        char ch = arr1[i][arr[i][0]];
        for (int j = 0;j<arr1[i].size();j++) if(arr1[i][j] == ch) arr1[i][j] = 'a' + arr[i][1];
    }
    string ans = "";
    int cntt = INT_MAX;
    for (int i=0; i<m; i++){
        int cnt = 0;
        string str = arr1[i];
        for(int j=0;j<str.length();j++) if(!(str[j] == 'a' || str[j] == 'e'|| str[j] == 'i'|| str[j] == 'o' || str[j] == 'u')) cnt++;
        if(cnt<cntt) {
            cntt = cnt;
            ans = str;
        }
    }
    cout << ans << " ";
}
int main() {
    fast;
    llint t=1, n, a;
    while (t--) {
        aman();
    }
    return 0;
}