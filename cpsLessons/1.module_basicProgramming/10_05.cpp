// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B
#include <stdio.h>

int main() {

    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long ans ;
    if(a % b == 0){
        ans = a / b;
    } else {
        ans = (a / b) + 1;
    }

    printf("%lld\n", ans);

    
    return 0;
}