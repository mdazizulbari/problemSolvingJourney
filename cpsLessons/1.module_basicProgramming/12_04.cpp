// https://www.codechef.com/problems/FOODCOST
#include <stdio.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    // x *= 6;
    // int total = x + y;
    // printf("%d\n", total);
    
    // or

    y += x * 6;
    printf("%d\n", y);
    
    return 0;
}