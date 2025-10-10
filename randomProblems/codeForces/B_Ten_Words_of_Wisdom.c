// https://codeforces.com/contest/1850/problem/B
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int winner = 0;
        int ai, bi, aiTemp, biTemp;
        bi = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d", &aiTemp, &biTemp);
            // printf("temp value = %d %d %d\n", n, aiTemp, biTemp);
            if (aiTemp <= 10 && biTemp > bi)
            {
                // ai = aiTemp;
                // printf("n = %d\n", n);
                bi = biTemp;
                winner = i;
            }
            // printf("bi = %d\n", bi);
        }
        printf("%d\n", winner);
    }

    return 0;
}