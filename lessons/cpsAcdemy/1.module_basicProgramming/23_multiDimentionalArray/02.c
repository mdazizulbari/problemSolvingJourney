#include <stdio.h>

int main()
{
    // 2 dimentional array
    int classes, maxRoll;
    int marks[4][3];

    // getting input
    scanf("%d%d", &classes, &maxRoll);
    for (int i = 0; i < classes; i++) // i = classes
    {
        for (int j = 0; j < maxRoll; j++) // j = roll
        {
            scanf("%d", &marks[j][i]); //j i = roll classes
        }
    }
    for (int i = 0; i < classes; i++)
    {
        for (int j = 0; j < maxRoll; j++)
        {
            // printf("classes = %d ", i);
            // printf("%d ", marks[j][i]);
            if (marks[j][i] > 50)
            {
                printf("g ");
            }
            else
                printf("b ");
        }
        printf("\n");
    }

    return 0;
}