// https://atcoder.jp/contests/abc213/tasks/abc213_a
#include <stdio.h>

int main() {
    /*
    a^b = c -- given
    so,
    a^c = b
    c^b = a

    a^b = c
    1^1 = 0     0^1 = 1
    a^c = b
    1^0 = 1     0^1 = 1 this works for different nums too
    c^b = a
    0^1 = 1

    a^b = result
    result^a = b
    result^b = a

    have to show,
    a^c = b or result
    so,
    c = b or result^a
    */

    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", a^b);
    
    return 0;
}