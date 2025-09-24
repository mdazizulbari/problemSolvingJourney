#include <stdio.h>

int main(){

    int x;
    x = 10;
    printf("value of x is %d\n", x);

    double y = 5.6;
    int z = y;
    printf("value of y is %d\n", z);
    printf("value of y is %lf\n", y);

    // Typecasting

    // double n = 5 / 2; 
    // the division is done in integer value, than saved in double so you will get the result in integer
    double n = 5.0 / 2;
    printf("value of n is %lf\n", n);

    int a = 5, b = 2;
    // double c = a / (double)b; 
    // you can forcefully make it a double
    // double c = a * 1.0 / b; 
    // double c = a / b * 1.0; // it won't work like this 
    double c = a / (b * 1.0); // but this will work
    printf("value of c is %lf\n", c);

    return 0;
}