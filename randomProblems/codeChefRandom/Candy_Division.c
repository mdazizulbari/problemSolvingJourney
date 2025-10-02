// https://www.codechef.com/problems/CANDIVIDE
#include <stdio.h>

int main() {
    // your code goes here
    int t, x;
    scanf("%d", & t);

    while (t--)
    {
        scanf("%d", & x);
        if (x %3==0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

    }
}