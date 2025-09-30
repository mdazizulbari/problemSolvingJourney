// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B
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
            // if (i == 1)
            // {
            //     for (int j = 1; j <= w; j++)
            //     {
            //         printf("#");
            //     }
            // }
            // else if (i == h)
            // {
            //     for (int j = 1; j <= w; j++)
            //     {
            //         printf("#");
            //     }
            // }
            // else
            // {
            //     for (int j = 1; j <= w; j++)
            //     {
            //         if (j == 1)
            //         {
            //             printf("#");
            //         }
            //         else if (j == w)
            //         {
            //             printf("#");
            //         }
            //         else
            //         {
            //             printf(".");
            //         }
            //     }
            // }

            // got to know a better way after seeing the lecture
            if (i == 1 || i == h)
            {
                for (int j = 1; j <= w; j++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int j = 1; j <= w; j++)
                {
                    if (j == 1 || j == w)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
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