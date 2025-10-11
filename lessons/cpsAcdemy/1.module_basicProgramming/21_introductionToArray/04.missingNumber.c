// https://cses.fi/problemset/task/1083
// Missing Number

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int totalSum = 0;
    for (int i = 1; i <= n; i++)
    {
        totalSum += i;
    }

    int givenSum = 0;
    int a;
    for (int i = 0; i < n - 1; i++)
    {
        scanf(" %d ", &a);
        givenSum += a;
    }

    int ans = totalSum - givenSum;

    printf("%d\n", ans);

    return 0;
}