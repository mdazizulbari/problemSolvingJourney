#include <stdio.h>

int main() {
    /*
    not(~) true = false
    not(~) false = true
    not flips things
    1 = 0
    0 = 1

    5 = 101
    ~5 = 010 = 2
    normally it seems like it should be like that, but all the int have 32 bits

    so there are 29 more 0's infront of 101 = 5
    so they become 29 1's and that's why ~5 returns -6

    integer range (-2^31) to (2^31-1) 
    -1 because in the middle there is one 0
    */
    int a;
    scanf("%d", &a);
    int b = ~a;

    printf("b = %d\n", b);
    
    return 0;
}