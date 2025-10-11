// https://codeforces.com/contest/1669/problem/A
// A. Division?
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        int x = 4;
        scanf("%d", &n);
        if (1400 <= n && n <= 1599)
        {
            x = 3;
        }
        else if (1600 <= n && n <= 1899)
        {
            x = 2;
        }
        else if (1900 <= n)
        {
            x = 1;
        }
        printf("Division %d\n", x);
    }

    return 0;
}