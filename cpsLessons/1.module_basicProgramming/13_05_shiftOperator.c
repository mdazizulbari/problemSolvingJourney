#include <stdio.h>

int main() {
    /*
    bitwise shift()

    0000225 / 10
    0002250
    0022500
    0225000 * 10
    0022500
    0002250
    0000225
    0000022
    0000002
    0000000
    this was in decimals, now lets see in binary

    000011
    000110 / 2
    001100 / 2
    011000 * 2
    001100 * 2
    000110 * 2
    000011 * 2
    000001 * 2
    000000

    left shift dose * 2
    (<< and write how many digits you want to shift)

    right shift dose / 2 
    (<< and write how many digits you want to shift)

    how to know positional values of binary numbers?
    positional means 1101 here the we can say what's the value of the 2nd number from left
    (num >> position you want) & 1
    */
    int a;
    scanf("%d", &a);
    int b = a << 3;
    int c = b >> 3;

    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}