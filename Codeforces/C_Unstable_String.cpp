#include <bits/stdc++.h>
#define llint long long int
using namespace std;

void printAllSubstrings(string s, int n)
{

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++)
        {
            temp[tempindex++] = s[j];
            temp[tempindex] = '\0';
            v.push_back(temp);
        }
    }

    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void aman()
{
    string s;
    cin >> s;
    printAllSubstrings(s, s.length());
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