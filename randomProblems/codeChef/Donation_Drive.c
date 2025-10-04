// https://www.codechef.com/problems/DONDRIVE
#include <stdio.h>

int main() {
    // your code goes here
    int t, x, n;
    scanf("%d", & t);

    int ans = 0;
    while (t--)
    {
        scanf("%d%d", & n, & x);
        ans = n - x;
        printf("%d\n", ans);
    }
}