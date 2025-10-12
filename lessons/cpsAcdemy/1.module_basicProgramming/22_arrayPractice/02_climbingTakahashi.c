// https://atcoder.jp/contests/abc235/tasks/abc235_b
// Climbing Takahashi

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;

    while (n--)
    {
        int a;
        scanf(" %d ", &a);
            if (a > ans)
            {
                ans = a;
            }
            else
                break;
    }
    printf("%d\n", ans);

    return 0;
}
