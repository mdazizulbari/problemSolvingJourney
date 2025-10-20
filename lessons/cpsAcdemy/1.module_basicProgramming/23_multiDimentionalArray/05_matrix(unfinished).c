// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
// matrix
#include <stdio.h>

int main()
{
    int n;
    int arr[110][110];

    // getting input
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // i = n
    {
        for (int j = 0; j < n; j++) // j = n
        {
            scanf("%d", &arr[j][i]);
        }
    }

    // logic
    int primaryDiagonal = 0;
    int primaryDiagonalCol = 0;
    int secondaryDiagonal = 0;
    int secondaryDiagonalCol = 0;

    for (int i = 0; i < n; i++)
    {
        printf("row = %d ", i);
        for (int j = 0; j < n; j++)
        {
            printf("col = %d ", j);
            if (primaryDiagonalCol == j)
            {
                primaryDiagonalCol++;
                primaryDiagonal += arr[i][j];
                printf("added ");
            }
        }
        printf("\n");
    }
    int tempAns;

    // making absolute value(positive value)
    int ans;
    if (tempAns < 0)
    {
        ans = tempAns + tempAns + tempAns;
    }
    else
        ans = tempAns;

    // output
    printf("%d\n", ans);

    return 0;
}
