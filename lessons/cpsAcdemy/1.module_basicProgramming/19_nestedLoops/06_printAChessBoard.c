// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C
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
            if (i % 2 == 0)
            {
                for (int j = 1; j <= w; j++)
                {
                    if (j % 2 == 0)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
            }
            else
            {
                for (int j = 1; j <= w; j++)
                {
                    if (j % 2 == 0)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");

        if (h == 0 && w == 0)
            break;
    }

    return 0;
}