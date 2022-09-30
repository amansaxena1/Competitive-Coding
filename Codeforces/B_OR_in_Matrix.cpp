#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, m, flag = 0, flag2 = 0;
    cin >> n >> m;
    int a[n][m];
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[n][m];
    int c[n][m];
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            b[i][j] = 1;
            c[i][j] = 0;
        }
    }

    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                for (llint k = 0; k < n; k++)
                {
                    b[k][j] = 0;
                }
                for (llint k = 0; k < m; k++)
                {
                    b[i][k] = 0;
                }
            }
        }
    }

    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            if (b[i][j] == 1)
            {
                for (llint k = 0; k < n; k++)
                {
                    c[k][j] = 1;
                }
                for (llint k = 0; k < m; k++)
                {
                    c[i][k] = 1;
                }
            }
        }
    }

    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            if (c[i][j] != a[i][j])
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES"
         << "\n";

    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    aman();
    return 0;
}

// #include <bits/stdc++.h>
// #define llint long long int
// using namespace std;

// void aman()
// {
//     llint n, m, flag = 0, flag2 = 0;
//     cin >> n >> m;
//     int a[n][m];
//     for (llint i = 0; i < n; i++)
//     {
//         for (llint j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (llint i = 0; i < n; i++)
//     {
//         for (llint j = 0; j < m; j++)
//         {
//             if (a[i][j] == 1)
//             {
//                 for (llint k = 0; k < n; k++)
//                 {
//                     if (a[k][j] == 0)
//                     {
//                         flag = 1;
//                         break;
//                     }
//                 }
//                 if (flag == 1)
//                 {
//                     flag = 0;
//                     for (llint k = 0; k < m; k++)
//                     {
//                         if (a[i][k] == 0)
//                         {
//                             flag = 1;
//                             cout << "NO";
//                             return;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     int b[n][m];
//     for (llint i = 0; i < n; i++)
//     {
//         for (llint j = 0; j < m; j++)
//         {
//             b[i][j] = 0;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "YES"
//              << "\n";
//         for (llint i = 0; i < n; i++)
//         {
//             for (llint j = 0; j < m; j++)
//             {
//                 if (a[i][j] == 1)
//                 {
//                     flag2 = 0;
//                     for (llint k = 0; k < n; k++)
//                     {
//                         if (a[k][j] == 0)
//                         {
//                             flag2 = 1;
//                             break;
//                         }
//                     }
//                     if (flag2 == 0)
//                     {
//                         for (llint k = 0; k < m; k++)
//                         {
//                             if (a[i][k] == 0)
//                             {
//                                 flag2 = 1;
//                                 break;
//                             }
//                         }
//                     }
//                     if (flag2 == 0)
//                     {
//                         b[i][j] = 1;
//                     }
//                 }
//             }
//         }
//     }
//     for (llint i = 0; i < n; i++)
//     {
//         for (llint j = 0; j < m; j++)
//         {
//             cout << b[i][j] << " ";
//         }
//         cout << "\n";
//     }
// }
// int main()
// {
//     aman();
//     return 0;
// }