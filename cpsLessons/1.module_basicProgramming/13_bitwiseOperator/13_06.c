
#include <stdio.h>

int main() {
    /*
    how to know positional values of binary numbers?
    positional means 1101 here the we can say what's the value of the 2nd number from left
    (num >> positions you want to shift) & 1

    13 = 1101
    1(1)01 we want to know what is the value of the 13's 3rd binary digit counting form left
    (13 >> 2) & 1
    (11{it's in binary}) & 1
    011
    001
    ---
    001 = 1 
    so that binary value is 1

    if you want to get the value of the last 2 digits of the binary number, you must take them separately and print them, or we will print out the decimal num insted of getting their binary value

    we can also check odd or even of a decimal number in this way

    */
    int n, position;
    scanf("%d%d", &n, &position);

    int result = (n >> position) & 1;
    printf("%d\n", result);
    
    return 0;
}