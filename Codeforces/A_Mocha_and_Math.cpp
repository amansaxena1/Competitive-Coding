/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = -1;
        if (a[n - 1] == 0)
        {
            for (int i = 1; i <= n + 1; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = n - 2; i >= 0; i--)
            {
                if ((a[i] == 0 && a[i + 1] == 1))
                {
                    k = i;
                }
            }
            if (k == -1)
            {
                cout << k;
            }
            else
            {
                for (int i = 1; i <= k + 1; i++)
                {
                    cout << i << " ";
                }
                cout << n + 1 << " ";
                for (int i = k + 2; i <= n; i++)
                {
                    cout << i << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}