#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    if(a < 3) printf("GOLD\n");
    else if(a >= 3 && a < 6) printf("SILVER\n");
    else printf("BRONZE\n");
    
    return 0;
}