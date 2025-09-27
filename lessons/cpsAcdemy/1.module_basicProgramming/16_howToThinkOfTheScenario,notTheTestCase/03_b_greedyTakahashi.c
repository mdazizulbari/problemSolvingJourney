// https://atcoder.jp/contests/abc149/tasks/abc149_b
#include <stdio.h>

int main() {

    long long a,b,k;
    scanf("%lld%lld%lld", &a,&b,&k);
    // printf("%lld %lld %lld", a,b,k);

    if(a>1000000000000LL || b>1000000000000LL || k>1000000000000LL){
        a = 0;
        b = 0;
        // printf("1st\n");
        printf("%lld %lld\n", a,b);
    }
    else if(k > a){
        long long kRemaining = k-a;
        a=0;
        // printf("kRem %lld\n",kRemaining);
        if(kRemaining > b){
            b = 0;
            // printf("2nd\n");
            printf("%lld %lld\n", a,b);
        }
        else{
            // kRemaining < b
            b = b-kRemaining;
            // printf("3rd\n");
            printf("%lld %lld\n", a,b);
        }
    }
    else{
        // k < a
        a = a-k;
        // printf("4th\n");
        printf("%lld %lld\n", a,b);
    }

    return 0;
}
