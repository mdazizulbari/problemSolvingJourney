// https://www.codechef.com/problems/AGEING
#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &x);
        y = x - 10;
        printf("%d\n", y);
    }

    return 0;
}