#include <bits/stdc++.h>
#define llint long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

vector<vector<llint>> v;

void fun(llint arr[], llint n, llint index, llint data[], llint i)
{
    if (index == 3)
    {
        vector<llint> t;
        for (llint j = 0; j < 3; j++)
            t.pb(data[j]);
        v.pb(t);
        return;
    }
    if (i >= n)
        return;
    data[index] = arr[i];
    fun(arr, n, index + 1, data, i + 1);
    fun(arr, n, index, data, i + 1);
}
void sneha()
{
    llint n, m;
    cin >> n;
    llint arr[n];
    for (llint i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    llint data[3];
    fun(arr, n, 0, data, 0);
    llint ans[m];
    memset(ans, 0, sizeof(ans));
    for (llint i = 0; i < v.size(); i++)
    {
        ans[(v[i][0] + v[i][1] + v[i][2]) % m]++;
    }
    for (llint i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    v.clear();
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        sneha();
    }
    return 0;
}