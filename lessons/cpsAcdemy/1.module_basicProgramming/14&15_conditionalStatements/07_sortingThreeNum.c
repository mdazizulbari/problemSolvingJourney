// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C
#include <stdio.h>

int main() {

    int a, b, c ;
    scanf("%d%d%d", &a, &b, &c);

    // 2,2,5,7 = called this is non asending or non increasing

    // we have to make the numbers print in asending order

    if(a < b){
        // a,b
        if(a > c){
            printf("%d %d %d\n", c, a, b);
        }
        // a,b & c,a
        else if(b < c){
            printf("%d %d %d\n", a,b,c);
        }
        else{
            printf("%d %d %d\n", a,c,b);
        }
    }
    else{
        // b,a
        if(b > c){
            printf("%d %d %d\n", c, b, a);
        }
        // b,a & c,a
        else if(a < c){
            printf("%d %d %d\n", b,a,c);
        }
        else{
            printf("%d %d %d\n", b,c,a);
        }
    }

    return 0;
}
