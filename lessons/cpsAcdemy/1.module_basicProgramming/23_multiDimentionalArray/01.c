#include <stdio.h>

int main()
{
    int ara[4][5];

    // getting input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    // giving output
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", ara[i][j]);
    //     }
    //     printf("\n");
    // }
    for (int i = 0; i < 3; i++)
    {
            printf("%dth row = ", i);
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ara[j][i]);
        }
        printf("\n");
    }

    // the main concept is ara[0][0], ara[0][1], ara[0][2], ara[0][3],....... ara[1][0], ara[1][1], ara[1][2],..... ara[2][0],  

    return 0;
}