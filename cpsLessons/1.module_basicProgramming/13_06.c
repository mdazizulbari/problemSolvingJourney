
#include <stdio.h>

int main() {
    /*
    */
    int a;
    scanf("%d", &a);
    int b = a << 3;
    int c = b >> 3;

    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}