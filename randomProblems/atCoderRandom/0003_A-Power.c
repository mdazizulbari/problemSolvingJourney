// https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en
#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    // printf("%d\n", a);
    // printf("%d\n", b);

    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    // printf("%d\n", ans);
    // printf("%d\n", i);
    }

    printf("%d\n", ans);
    
    return 0;
}