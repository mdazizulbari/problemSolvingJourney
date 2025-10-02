// https://www.codechef.com/problems/SWEETSHOP
#include <stdio.h>

int main() {

    int x,n;
    scanf("%d%d", &x, &n);

    int ans = (x - (n*10)) / 20;

    printf("%d\n", ans);
    
    return 0;
}