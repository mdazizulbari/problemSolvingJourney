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

    000011 = 3
    000110 = 6 * 2
    001100 = 12 * 2
    011000 = 24 / 2
    001100 = 12 / 2
    000110 = 6 / 2
    000011 = 3 / 2
    000001 = 1 / 2
    000000 = 0

    left shift dose * 2
    (<< and write how many digits you want to shift)

    right shift dose / 2 
    (<< and write how many digits you want to shift)

    you can do all the divisions and multiplications of 2 with the binary shift

    */
    int a;
    scanf("%d", &a);
    int b = a << 3;
    int c = b >> 3;

    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}