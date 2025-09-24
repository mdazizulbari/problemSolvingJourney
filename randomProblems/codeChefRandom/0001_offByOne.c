// https://www.codechef.com/problems/OFFBY1
#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int sum = a + b;

    int ans = (sum * 10) + 1;
    printf("%d\n", ans);
    
    return 0;
}