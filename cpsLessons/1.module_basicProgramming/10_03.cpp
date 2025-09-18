// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int d = a / b;
    int r = a % b;
    double f = a / (b * 1.0);

    printf("%d %d %.8lf\n", d, r, f);
    
    return 0;
}