// https://atcoder.jp/contests/abc304/tasks/abc304_b
#include <stdio.h>
#include <math.h>

int main() {

    int a;
    scanf("%d", &a);
    // printf("a = %d", a);
    int ans;

    // if(pow(10,3) < a < pow(10,4)){
    if(a < 1000){
        ans = a;
    }
    else if(a < 10000){
        // 1000, 2535
        a = (a/10) * 10;
        ans = a;
        // printf("1\n");
    }
    else if(a < pow(10,5)){
        // 10000, 25356
        a = (a/100) * 100;
        ans = a;
        // printf("10^4\n");
    }
    else if(a < pow(10,6)){
        a = (a/1000) * 1000;
        ans = a;
        // printf("10^5\n");
    }
    else if(a < pow(10,7)){
        a = (a/10000) * 10000;
        ans = a;
        // printf("10^6\n");
    }
    else if(a < pow(10,8)){
        a = (a/100000) * 100000;
        ans = a;
        // printf("10^7\n");
    }
    else if(a < pow(10,9)){
        a = (a/pow(10,6)) * pow(10,6);
        ans = a;
        // printf("10^8\n");
    }

    printf("%d\n", ans);
    
    return 0;
}