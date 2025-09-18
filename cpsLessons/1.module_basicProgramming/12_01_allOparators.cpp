// 
#include <stdio.h>

int main() {
    
    int a = 7;
    a++; // increment
    printf("%d\n", a);
    a--; // decrement
    printf("%d\n", a);

    int b = 8;
    int c = b++;
    printf("b=%d\n", b);
    printf("c=%d\n", c);

    int d = 8;
    int e = ++d;
    printf("d=%d\n", d);
    printf("e=%d\n", e);

    int f = 9;
    printf("f=%d\n", ++e);
    printf("f=%d\n", e++);

    // 1. 2*(a--)+1
    // 2. 2*(--a)+1
    // here you want to see the decremented value, so the 2no is correct
    
    return 0;
}