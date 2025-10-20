// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
// way too long words
#include <stdio.h>
#include <string.h>

int main()

{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[101];
        scanf("%s", a);
        int n = strlen(a); // getting the index of the string

        if (n <= 10)
        {
            printf("%s", a);
        }
        else
        {
            // int lastChar = n - 1;
            // printf("%c", a[0]);

            // int d = 0;
            // for (int i = 1; i <= lastChar - 1; i++)
            // {
            //     d++;
            // }
            // printf("%d", d);

            // printf("%c", a[lastChar]);

            // better way shown in lecture,
            printf("%c%d%c", a[0], n - 2, a[n - 1]);
        }
        printf("\n");
    }

    return 0;
}