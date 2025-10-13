// https://atcoder.jp/contests/abc290/tasks/abc290_a
// contest result

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[110];
    int b[110];

    // getting input
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        int index = b[i];
        ans += a[index];
        // printf("%d\n", a[index]);
    }
    printf("%d", ans);

    return 0;
}