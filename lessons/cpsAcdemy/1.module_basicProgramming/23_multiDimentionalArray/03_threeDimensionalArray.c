#include <stdio.h>

int main()
{
    // 3 dimentional array
    int schools, classes, maxRoll;
    int arr[3][3][2]; // setting limit

    // getting input
    scanf("%d%d%d", &schools, &classes, &maxRoll);
    for (int i = 0; i < schools; i++) // i = schools
    {
        for (int j = 0; j < classes; j++) // j = classes
        {
            for (int k = 0; k < maxRoll; k++) // k = roll
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // output
    for (int i = 0; i < schools; i++) // i = schools
    {
        printf("School no - %d\n", i);
        for (int j = 0; j < classes; j++) // j = classes
        {
            for (int k = 0; k < maxRoll; k++) // k = roll
            {
                if (arr[i][j][k] > 50)
                {
                    printf("g ");
                }
                else
                    printf("b ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}