// https://www.codechef.com/problems/CHESS_PAIR
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, n;
        scanf("%d %d", &n, &x);
        int unRated = (2 * n) - x;
        int ans;

        if (x > n)
        {
            if (x == unRated)
                ans = 0;
            else
            {
                if (x > unRated)
                    ans = x - unRated;
                else if (unRated == 0)
                    ans = x;
                else
                    ans = 0;
            }
        }
        else
            ans = 0;

        printf("%d\n", ans);
    }

    return 0;
}