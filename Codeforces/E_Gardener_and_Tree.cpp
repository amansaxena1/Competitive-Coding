#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(char curr[])
{
    char a[] = "int";
    char b[] = "main";
    char c[] = "return";
    char d[] = "if";
    if (strcmp(curr, a) == 0)
        return 0;
    if (strcmp(curr, b) == 0)
        return 0;
    if (strcmp(curr, c) == 0)
        return 0;
    if (strcmp(curr, d) == 0)
        return 0;
    int tp = 0;
    for (int i = 0; i < strlen(curr); i++)
    {
        if (!(curr[i] >= '0' && curr[i] <= '9'))
            tp = 1;
    }
    return tp;
}
void aman()
{
    char curr[1001], prev[1001], ch;
    char all[1001][1001];
    int i = 0, alli = 0;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch == ' ' || ch == ',' || ch == '\n' || ch == ';' || ch == '=' || ch == '+' || ch == '-' || ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '/')
        {
            curr[i] = NULL;
            int pos = 1;
            for (int i = 0; i < alli; i++)
            {
                if (strcmp(all[i], curr) == 0)
                    pos = 0;
            }
            if (check(curr) && pos == 1)
            {
                printf("%s\n", curr);
                strcpy(all[alli], curr);
                alli++;
            }
            strcpy(prev, curr);
            i = 0;
        }
        else
            curr[i++] = ch;
    }
    curr[i] = NULL;
    int pos = 1;
    for (int i = 0; i < alli; i++)
    {
        if (strcmp(all[i], curr) == 0)
            pos = 0;
    }
    if (check(curr) && pos == 1)
    {
        printf("%s\n", curr);
        strcpy(all[alli], curr);
        alli++;
    }
    strcpy(prev, curr);
}

int main()
{
    aman();
    return 0;
}