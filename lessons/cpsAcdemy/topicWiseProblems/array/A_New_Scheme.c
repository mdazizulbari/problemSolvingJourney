// https://atcoder.jp/contests/abc308/tasks/abc308_a
// new scheme

#include <stdio.h>

int main()
{
    int res = 0;
    int s[8 + 1];

    int j = 1;
    scanf("%d", &s[j]);
    if (100 <= s[j] && s[j] <= 675 && s[j] % 25 == 0)
    {
        res = 1;
    }
    else
    {
        res = 0;
        // printf("noed in i = %d\n", s[j]);
    }

    // getting input
    for (int i = 2; i <= 8; i++)
    {
        scanf("%d", &s[i]);
        // printf("%d\n", s[i]);

        if (100 <= s[i] && s[i] <= 675 && s[i] % 25 == 0)
        {
            res = 1;
        }
        else
        {
            res = 0;
            break;
            printf("noed in i = %d\n", s[i]);
        }

        if (s[j] <= s[i] || i == 8)
        // if (s[j] - s[i] <= 0 || i == 8)
        {
            // printf("fuck i = %d, j = %d\n", s[i], s[j]);
            res = 1;
        }
        else
        {
            res = 0;
            break;
            printf("noed in i = %d\n", s[i]);
        }

        j++;
    }

    if (res == 0)
    {
        printf("No\n");
    }
    else
        printf("Yes\n");

    return 0;
}