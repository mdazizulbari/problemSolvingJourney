// https://www.codechef.com/problems/BRUNCH
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = x / y;

        if (ans > 20)
            ans = 20;
        printf("%d\n", ans);
    }
}