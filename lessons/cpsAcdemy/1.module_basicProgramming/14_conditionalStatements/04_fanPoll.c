// https://www.codechef.com/problems/FIZZBUZZ2301
#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && a>c) printf("yes\n");
    else printf("no\n");
    
    return 0;
}