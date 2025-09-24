// https://www.codechef.com/problems/MVR
#include <stdio.h>

int main() {

    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);

    int messi = (a*2)+b;
    int ronaldo = (x*2)+y;

    if(messi > ronaldo) printf("messi\n");
    else if(messi < ronaldo) printf("ronaldo\n");
    else printf("equal\n");
    
    return 0;
}