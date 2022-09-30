#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
}
int main()
{
    llint qb = 0, qa = 0, flag = 0;
    string s;
    cin >> s;
    for (llint i = 0; i < s.length(); i++)
    {
        if (s[i] == 'Q')
        {
            qb++;
        }
        if (s[i] == 'A')
        {
            flag = 1;
        }
        if (flag == 1 && s[i] == 'Q')
        {
            qa++;
        }
    }

    return 0;
}