// https://codeforces.com/contest/1560/problem/A
#include <stdio.h>

int main()
{
    int t, k;
    scanf("%d", &t);

    // for (int i = 1; i <= t; i++)
    while (t--) //this is more efficient
    {
        scanf("%d", &k);
        // printf("%d\n", k);
        int count = 0;

        for (int j = 1;; j++)
        {
            if (j % 10 == 3 || j % 3 == 0)
                continue;

            count++;

            if (count == k)
            {
                printf("%d\n", j);
                break;
            }
        }
    }

    return 0;
}