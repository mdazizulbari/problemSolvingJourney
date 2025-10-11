#include <stdio.h>

int main()
{
    // int nums;
    // scanf("%d", &nums);
    // int a[nums];

    // for (int i = 0; i < nums; i++)
    // {
    //     scanf("%d ", &a[i]);
    // }

    // int sum = 0;
    // for (int i = 0; i < nums; i += 2)
    // {
    //     sum += a[i];
    // }
    // printf("%d\n", sum);

    // code after understanding the lecture,
    int nums;
    scanf("%d", &nums);
    int a;

    // we dont need to store any values, we can just directly add them to the sum with the right condition
    int sum = 0;
    for (int i = 0; i < nums; i++)
    {
        scanf("%d", &a);
        if (i % 2 == 0)
        {
            sum += a;
        }
    }
    printf("%d\n", sum);

    return 0;
}