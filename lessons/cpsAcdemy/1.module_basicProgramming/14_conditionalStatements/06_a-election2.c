// https://atcoder.jp/contests/abc366/tasks/abc366_a
#include <stdio.h>

int main() {

    int n,t,a;
    scanf("%d%d%d", &n, &t, &a);

    int remaining = n - (t+a);
    // printf("%d\n",remaining);

    int gap;
    if(t >= a) gap = t - a;
    else gap = a - t;
    // printf("%d\n",gap);

    if(remaining < gap) printf("Yes\n");
    else printf("No\n");

    // the way explained in the lecture, 
    // if((t > (a+remaining)) || (a > (t+remaining))){
    //     printf("Yes\n");
    // }
    // else printf("No\n");

    return 0;
}