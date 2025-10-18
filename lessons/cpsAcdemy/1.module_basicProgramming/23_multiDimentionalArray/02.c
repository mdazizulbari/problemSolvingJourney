#include <stdio.h>

int main()
{
    int classes, maxRoll;
    int marks[3][4];

    // getting input
    scanf("%d%d", &classes, &maxRoll);
    for (int i = 0; i < classes; i++)
    {
        for (int j = 0; j < maxRoll; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < classes; i++)
    {
        for (int j = 0; j < maxRoll; j++)
            if (marks[i][j] > 50)
            {
                printf("g ");
                // printf("%d ", ara[j][i]);
            }
            else
                printf("b ");
        printf("\n");
    }

    return 0;
}