#include <stdio.h>

int main() {

    /*
    input budget, price, available(with 0 or 1)
    if you have enough budget and the product is available
    than print "YES"
    otherwise print "No"
    */

    int budget, price, available;
    scanf("%d%d%d", &budget, &price, &available);

    if(price <= budget && available == 1){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    // int ans ;
    // printf("%d\n", ans);
    
    return 0;
}