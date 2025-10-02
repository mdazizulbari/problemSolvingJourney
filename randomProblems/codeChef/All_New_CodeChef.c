// https://www.codechef.com/problems/NEWCC
#include <stdio.h>

int main() {

    int a,b;
    scanf("%d%d", &a,&b);

    if(a < b) printf("Old\n");
    else if(a > b) printf("New\n");
    else printf("Same\n");
    
    return 0;
}