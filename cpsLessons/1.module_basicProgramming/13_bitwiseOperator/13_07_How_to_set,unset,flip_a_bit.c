// https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU2
#include <stdio.h>

int main() {

    /*
    seting a bit means making it's value 1
    unseting a bit means making it's value 0
    question's 1st bit means the normal first position, if it's not stated that they are using zero index value

    first try setting the first bit to 1,
    1100
    0001  = 1
    ---- bitwise or
    1101

    1010 = 10 - a different example
    0001
    ----
    1011 = 11

    than we will make the second bit 0,
    1011 = 11
    the decimal num & (~2)
    ~2 = ~010 = 111111111...111101
    00..01011
    11..11101
    --------- and
    000001001

    now we will flip the 3rd bit,
    we will XOR with the 3rd bit's position
    1001
    0100
    ---- xor
    1101

    */
    int n;
    scanf("%d", &n);

    int result = n | 1;
    int x = 2;
    result = result & (~2); //  because 2 = 0010
    // result = result & (~(1 << 1)); // can do this way too
    // result = result ^ (1 << 2);
    result = result ^ 4; // can do this way too because 4 = 0100
    printf("%d\n", result);
    
    return 0;
}