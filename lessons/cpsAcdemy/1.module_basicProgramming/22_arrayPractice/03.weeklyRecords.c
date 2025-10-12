// https://atcoder.jp/contests/abc307/tasks/abc307_a
// Weekly Records

#include <stdio.h>

int main()
{
    // ------ ans from the lecture
    // int n;
    // scanf("%d", &n);

    // for (int w = 1; w <= n; w++)
    // {
    //     int ans = 0;
    //     for (int d = 1; d <= 7; d++)
    //     {
    //         int arr[7];
    //         scanf(" %d ", &arr[d]);
    //         ans += arr[d];
    //     }
    //     printf("%d ", ans);
    // }

    // ------ ans from the lecture with only one loop
    int n;
    scanf("%d", &n);
    int arr[n * 7];
    int ans = 0;

    for (int d = 1; d <= n * 7; d++)
    {
        scanf(" %d ", &arr[d]);
        ans += arr[d];
        if (d % 7 == 0)
        {
            printf("%d ", ans);
            ans = 0;
        }
    }

    // ------ my successful code
    // int n;
    // scanf("%d", &n);
    // int nInDays = n * 7;
    // // int arrNum = nInDays - 1;
    // int walking[nInDays];

    // for (int i = 1; i <= nInDays; i++)
    // {
    //     scanf(" %d ", &walking[i]);
    //     // printf("%d ", walking[i]);
    // }

    // for (int j = 0; j < n; j++)
    // {
    //     int ans = 0;
    //     int arrNum2;
    //     if (j != 0)
    //     {
    //         arrNum2 = (j * 7) + 1;
    //     }
    //     else
    //         arrNum2 = 1;

    //     for (int i = 1; i <= 7; i++)
    //     {
    //         // int arrNum2 = (i * j) - 1;
    //         // printf("%d", walking[arrNum2]);
    //         // printf("\n");
    //         ans += walking[arrNum2];
    //         arrNum2++;
    //     }
    //     printf("%d ", ans);
    // }

    // ---- my failing attempt
    // for (int k = 0; k < nInDays; k++)
    // {
    //     int arrNum = nInDays - 1;
    //     int a[arrNum];
    //     scanf(" %d ", &a[k]);
    //     for (int i = 1; i <= n; i++)
    //     {
    //         int ans = 0;
    //         for (int j = 0; j < 7; j++)
    //         {
    //             int arrNum2 = (j * i) - 1;
    //             ans += a[j * i];
    //         }
    //         printf("%d ", ans);
    //     }
    // }

    return 0;
}
