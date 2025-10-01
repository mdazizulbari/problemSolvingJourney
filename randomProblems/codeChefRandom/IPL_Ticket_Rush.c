// https://www.codechef.com/problems/IPLTRSH
#include <stdio.h>

int main()
{
    int t, n, m, ans;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n, &m);
        if (n <= m)
        {
            ans = 0;
            printf("%d\n", ans);
            continue;
        }
        ans = n - m;
        printf("%d\n", ans);
    }

    return 0;
}