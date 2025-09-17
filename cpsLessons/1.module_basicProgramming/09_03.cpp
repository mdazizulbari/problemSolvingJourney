#include <stdio.h>

int main(){

    // int x;
    // printf("Enter the value of x = ");
    // scanf("%d", &x);
    // printf("Value of x is : %d\n", x);

    int x, y;
    double a = 5.6;
    scanf("%d%d%lf", &x, &y, &a);
    printf("x = %d, y = %d, a = %lf\n", x, y, a);
    
    return 0;
}