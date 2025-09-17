#include <stdio.h>

int main(){

    int x;
    x = 10;
    printf("value of x is %d\n", x);

    double y = 5.6;
    int z = y;
    printf("value of y is %d\n", z);
    printf("value of y is %lf\n", y);

    double n = 5 / 2; // the division is done in integer value, than saved in double
    printf("value of n is %lf\n", n);

    return 0;
}