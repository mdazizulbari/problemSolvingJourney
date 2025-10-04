// https://www.codechef.com/problems/RIGHTTHERE
#include <stdio.h>

int main() {
    // your code goes here
    int t, x, n;
    scanf("%d", & t);

    int ans = 0;
    while (t--)
    {
        scanf("%d%d", & n, & x);
        if (n <= x) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}