// https://www.codechef.com/problems/DNATION?tab=ide
#include <stdio.h>

int main() {
    // your code goes here
    int t, x, y;
    scanf("%d", & t);

    int ans = 0;
    while (t--)
    {
        scanf("%d%d", & x, & y);
        ans = y - x;
        printf("%d\n", ans);
    }
}