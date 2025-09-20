#include <stdio.h>

int main() {

    // input n
    // output last digit
    // example 1004

    int n;
    scanf("%d", &n);

    int output = ("%d", n - n / 10 * 10);
                    // 36 - 36 / 10 * 10
                    // 36 - 3.6 * 10
                    // 36 - 3 * 10 // because no typecasting
                    // 36 - 30
                    // 6
    printf("%d\n", output);

    return 0;
}

