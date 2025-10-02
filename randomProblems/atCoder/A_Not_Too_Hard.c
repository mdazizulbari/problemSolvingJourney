// https://atcoder.jp/contests/abc328/tasks/abc328_a
#include <stdio.h>

int main()
{
    int n, x, s;
    scanf("%d%d", &n, &x);
    int sum = 0;

    while (n--)
    {
        scanf("%d", &s);
        if (s > x)
            continue;
        sum += s;
    }

    printf("%d\n", sum);

    return 0;
}