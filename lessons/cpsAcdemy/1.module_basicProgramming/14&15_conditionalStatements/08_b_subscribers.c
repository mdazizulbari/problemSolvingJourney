// https://atcoder.jp/contests/abc304/tasks/abc304_b
#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    // printf("a = %d", a);
    int ans;

    // if(1000 < a < 10000){
    if(a < 1000){
        ans = a;
    }
    else if(a < 10000){
        // 1000, 2535
        a = (a/10) * 10;
        ans = a;
        // printf("1\n");
    }
    else if(a < 100000){
        // 10000, 25356
        a = (a/100) * 100;
        ans = a;
        // printf("10^4\n");
    }
    else if(a < 1000000){
        a = (a/1000) * 1000;
        ans = a;
        // printf("10^5\n");
    }
    else if(a < 10000000){
        a = (a/10000) * 10000;
        ans = a;
        // printf("10^6\n");
    }
    else if(a < 100000000){
        a = (a/100000) * 100000;
        ans = a;
        // printf("10^7\n");
    }
    else if(a < 1000000000){
        a = (a/1000000) * 1000000;
        ans = a;
        // printf("10^8\n");
    }

    printf("%d\n", ans);
    
    return 0;
}
