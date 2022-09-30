#include <bits/stdc++.h>
#define llint long long int
using namespace std;

bool sortbysec(const tuple<long long int, long long int, long long int> &a,
               const tuple<long long int, long long int, long long int> &b)
{
    return (get<1>(a) < get<1>(b));
}

void aman()
{
    llint n, k, a;
    cin >> n >> k;
    vector<llint> v, u;
    vector<pair<llint, llint>> vp;
    vector<tuple<long long int, long long int, long long int>> vt;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        u.push_back(a);
        vt.push_back(make_tuple(i, a, 0));
    }
    // for (llint i = 0; i < vt.size(); i++)
    // {
    //     cout << get<1>(vt[i]) << " ";
    // }
    // cout << "\n";
    std::sort(u.begin(), u.end());
    vector<llint>::iterator ip = std::unique(u.begin(), u.end());
    u.resize(std::distance(u.begin(), ip));

    for (llint i = 0; i < u.size(); i++)
    {
        vp.push_back(make_pair(u[i], count(v.begin(), v.end(), u[i])));
    }
    // for (llint i = 0; i < vp.size(); i++)
    // {
    //     cout << vp[i].first << " " << vp[i].second << "\n";
    // }
    llint count = 0;
    for (llint i = 0; i < vp.size(); i++)
    {
        if (vp[i].second < k)
        {
            count += vp[i].second;
        }
    }
    count = count / k;
    sort(vt.begin(), vt.end(), sortbysec);
    for (llint i = 0; i < vt.size(); i++)
    {
        cout << get<1>(vt[i]) << " ";
    }
    llint counter = 1,c=0;
    for (llint i = 0; i < vt.size(); i++)
    {

        if(counter>k){
            counter = 1;
            c++;
        }
        if(c>count){
            break;
        }
        std::get<1>(v[i]) = counter;
        counter++;
    }

    
}
int main()
{
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}