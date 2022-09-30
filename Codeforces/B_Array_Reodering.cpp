#include <bits/stdc++.h>
using namespace std;

int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for (; i < s1.length(); i++)
    {
        if (counter == s2.length())
            break;
        if (s2[counter] == s1[i])
        {
            counter++;
        }
        else
        {
            if (counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length() ? -1 : i - counter;
}

// Driver code
int main()
{
    string s1 = "geeksfffffoorrfoorforgeeks";
    cout << Substr("for", s1);
    return 0;
}