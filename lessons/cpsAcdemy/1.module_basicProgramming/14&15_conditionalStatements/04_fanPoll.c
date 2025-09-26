// https://www.codechef.com/problems/FIZZBUZZ2301
#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && a>c) printf("yes\n");
    // it will work even if we use the bitwise and (&)
    /*
    because,
    if(a>b & a>c)
    it becomes,
    if(1 & 1) // if both are true

    a>b returns ans in bool, true = 1, false = 0
    */
    else printf("no\n");
    
    return 0;
}