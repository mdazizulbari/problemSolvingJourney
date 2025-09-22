// https://atcoder.jp/contests/abc302/tasks/abc302_a?lang=en
#include <stdio.h>

int main(){

    long long a, b;
    scanf("%lld%lld", &a, &b);

    long long ans = a / b;

    if( a % b != 0 ){
        ans ++;
    }

    printf("%lld\n", ans);

    return 0;
}