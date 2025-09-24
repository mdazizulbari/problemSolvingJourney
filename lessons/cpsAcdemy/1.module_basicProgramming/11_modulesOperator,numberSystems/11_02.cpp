#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    int first  = x % 2;
            // 9 % 2 = 1
    x = x / 2;
    // 9 = 9 / 2

    int second  = x % 2;
            // 4 % 2 = 0
    x = x / 2;
    // 4 = 4 / 2

    int third  = x % 2;
            // 4 % 2 = 0
    x = x / 2;
    // 2 = 2 / 2

    int fourth = x % 2;
            // 1 % 2 = 1

    printf("9 in binary = %d%d%d%d\n", fourth, third, second, first);

    return 0;
}