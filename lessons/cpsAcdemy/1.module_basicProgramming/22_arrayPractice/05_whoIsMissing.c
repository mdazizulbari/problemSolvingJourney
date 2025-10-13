// https://atcoder.jp/contests/abc236/tasks/abc236_b
// who is missing

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[4 * n - 1];
    int f[n + 1];
    // we don't need 4n here, because we have the numbers 1,2...n 4 times repeating
    for (int i = 0; i <= 4 * n; i++)
        f[i] = 0; // initialize manually

    for (int i = 0; i < 4 * n - 1; i++)
    {
        scanf("%d", &arr[i]);
        f[arr[i]]++;
    }

    int ans;
    for (int i = 1; i <= 4 * n; i++)
    {
        if (f[i] == 3)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}