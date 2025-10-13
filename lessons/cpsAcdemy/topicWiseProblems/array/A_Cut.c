// https://atcoder.jp/contests/abc368/tasks/abc368_a
// cut

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ans[110];

    // getting input
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ans[i]);
    }

    // printing the k values first
    for (int i = n - k + 1; i <= n; i++)
    {
        printf("%d ", ans[i]);
    }

    // printing the first n-k values of the inputs we got
    for (int i = 1; i <= n - k; i++)
    {
        printf("%d ", ans[i]);
    }

    // my wrong code for when the k is bigger than half of the n, and also it's really overthinked, it could be done much more easily

    // int n, k;
    // scanf("%d %d", &n, &k);
    // int ans[110];

    // // getting input
    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &ans[i]);
    // }

    // // getting the last k values in temp
    // int temp[110];
    // int l = 1;
    // for (int i = n - k + 1; i <= n; i++)
    // {
    //     temp[l] = ans[i];
    //     l++;
    // }

    // // moving the front values k times back
    // int j = 1 + k;
    // // for (int i = 1; i <= n; i++)
    // for (int i = 1; j <= n; i++)
    // {
    //     ans[j] = ans[i];
    //     j++;
    // }

    // // adding the temp values to the front
    // for (int i = 1; i <= k; i++)
    // {
    //     ans[i] = temp[i];
    // }

    // // printing the values
    // for (int i = 1; i <= n; i++)
    // {
    //     // printf("%d ", i);
    //     printf("%d ", ans[i]);
    //     // printf("temp = %d ", temp[i]);
    //     // printf("%d ", temp[i]);
    // }

    return 0;
}