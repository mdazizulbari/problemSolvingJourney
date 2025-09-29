#include <stdio.h>

int main() {

    int tc;
    scanf("%d", &tc);

    // int x;
    // while(x <= tc){
    //     int a,b,sum;
    //     scanf("%d", &a, &b, &sum);
    //     sum = a+b;
    //     printf("Case %d: %d\n", tc, sum);
    //     x++;
    // }

    // in for loop, recommended
    for(int x = 1; x <= tc; x++){
        int a,b,sum;
        scanf("%d", &a, &b, &sum);
        sum = a+b;
        printf("Case %d: %d\n", tc, sum);
    }

    return 0;
}