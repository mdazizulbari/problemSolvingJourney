// https://atcoder.jp/contests/abc286/tasks/abc286_a
// range swap

#include <stdio.h>

int main()
{
    int n, p, q, r, s;
    scanf("%d %d %d %d %d", &n, &p, &q, &r, &s);
    int a[n + 1];
    int b[n + 1];

    // getting input
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
        // printf("a=%d ", a[i]);
        // printf("b=%d ", b[i]);
    }

    int j = r;
    for (int i = p; i <= q; i++)
    {
        b[j] = a[i];
        j++;
    }

    int k = p;
    for (int i = r; i <= s; i++)
    {
        b[k] = a[i];
        k++;
    }

    // printing b
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}