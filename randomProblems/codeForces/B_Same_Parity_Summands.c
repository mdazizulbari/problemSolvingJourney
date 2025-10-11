// https://codeforces.com/contest/1352/problem/B
// B. Same Parity Summands

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int odd = n - (k - 1);
        int even = n - (2 * (k - 1));
        int nums = k - 1;

        if (n == k)
        {
            printf("YES\n");
            while (nums--)
            {
                printf("1 ");
            }
            printf("1\n");
        }
        else if (odd >= 1 && odd % 2 == 1)
        {
            printf("YES\n");
            while (nums--)
            {
                printf("1 ");
            }
            printf("%d\n", odd);
        }
        else if (even >= 1 && even % 2 == 0)
        {
            printf("YES\n");
            while (nums--)
            {
                printf("2 ");
            }
            printf("%d\n", even);
        }
        else
            printf("NO\n");
    }

    return 0;
}