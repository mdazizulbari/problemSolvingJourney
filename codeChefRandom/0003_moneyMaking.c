// https://www.codechef.com/problems/NUGGET?tab=ide
#include <stdio.h>

int main() {

    int x, y;
    scanf("%d%d", &x, &y);

    int ans = (x * 5000) + (y * 9800);
    printf("%d\n", ans);
    
    return 0;
}