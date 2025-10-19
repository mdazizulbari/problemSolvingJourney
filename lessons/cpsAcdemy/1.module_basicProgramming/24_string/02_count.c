#include <stdio.h>

char a[1000001];
// if array is more than 10^5, we should declare it in the global

int main()

{
    scanf("%s", a);

    int ans = 0;
    int n = strlen(a); // getting the index of the string
    for (int i = 0; i < n; i++)
    {
        //     if (a[i] == "\0")
        //     {
        //         break;
        //     }
        ans += a[i] - '0';
    }

    printf("%d\n", ans);

    return 0;
}