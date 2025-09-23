// https://www.codechef.com/problems/RIP2000
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int total = n * 2000;

    int ans = total / 500;
    printf("%d\n", ans);
    
    return 0;
}