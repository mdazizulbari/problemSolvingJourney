// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B
#include <stdio.h>

int main() {

    int a;

    for(int i = 1;;i++){
        scanf("%d", &a);
        if(a==0) break;
        printf("Case %d: %d\n", i,a);
    }
    
    return 0;
}