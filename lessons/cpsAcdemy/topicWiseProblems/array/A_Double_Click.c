// https://atcoder.jp/contests/abc297/tasks/abc297_a
// duble click

#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int t = 0;

    // getting input
    int res = 0;
    int tempT = 0;
    scanf("%d", &tempT);
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &t);
        int cd = 0; // click delay
        cd = t - tempT;
        if (cd <= d)
        {
            printf("%d\n", t);
            res = 1;
            break;
        }
        tempT = t;
    }
    if (res == 0)
    {
        printf("-1\n");
    }

    return 0;
}