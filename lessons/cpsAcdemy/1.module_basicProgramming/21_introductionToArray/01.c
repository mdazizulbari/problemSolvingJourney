#include <stdio.h>

int main()
{
    int nums = 10;
    int a[nums];

    for (int i = 0; i < nums; i++)
    {
        scanf("%d ", &a[i]);
        printf("%d ", a[i]);
    }
    // for (int i = 0; i < nums; i++)
    // {
        // printf("%d ", a[i]);
    // }

    return 0;
}