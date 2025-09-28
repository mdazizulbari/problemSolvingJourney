#include <stdio.h>

int main() {

    int r1,r2,d1,d2;
    scanf("%d%d %d%d", &r1,&r2,&d1,&d2);

    int dominater = r1+d1;
    int everule = r2+d2;

    if(dominater > everule) printf("Dominater\n");
    else printf("Everule\n");
    
    return 0;
}