// https://www.codechef.com/problems/SPCP2

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, n;
        scanf("%d %d", &x, &n);

        int need = n / 100;
        int remainder = n % 100;
        int buy;

        if (x == 0 && n == 0)
        {
            buy = 0;
        }
        else if (x == 0)
        {
            buy = 1;
        }
        else if (need > x)
        {
            buy = need - x;
            if (remainder != 0)
                buy++;
        }
        else
            buy = 0;

        printf("%d\n", buy);
    }

    return 0;
}