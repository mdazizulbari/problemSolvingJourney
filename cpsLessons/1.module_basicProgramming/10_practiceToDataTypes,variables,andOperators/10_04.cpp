// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B
#include <stdio.h>
#include <math.h>

int main() {

    double r;
    scanf("%lf", &r);
    
    double pi = M_PI;
    double area = pi * r * r;
    double circumference = 2 * pi * r;

    printf("%.8lf %.8lf", area, circumference);
    
    return 0;
}