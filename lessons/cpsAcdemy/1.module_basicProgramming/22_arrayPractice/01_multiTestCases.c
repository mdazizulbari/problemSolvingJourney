// https://atcoder.jp/contests/abc284/tasks/abc284_b
// Multi Test Cases

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ans = 0;

        while (n--)
        {
            int a;
            scanf(" %d ", &a);
            if (a % 2 == 1)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}