// https://www.codechef.com/problems/EXAMCHEF
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        int h = (x * y) / 2;
        // printf("%d\n", h);

        if (z > h)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}