// https://www.codechef.com/problems/AGENTCHEF
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        // 20% = 1/5
        /*
        or x/5 = getsInOne
        and 100/(x/5) = ans
        or (100*5)/x = ans
        so ans = 500/x
        */
        int ans = 500 / x;
        int remainder = 500 % x;

        if (remainder)
            ans++;

        printf("%d\n", ans);
    }

    return 0;
}