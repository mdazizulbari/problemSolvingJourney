// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A
#include <stdio.h>

int main()
{
    int h, w;
    // h = row, w = col
    for (;;)
    {
        scanf("%d%d", &h, &w);

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");

        if (h == 0 && w == 0)
            break;
    }

    return 0;
}