#include <stdio.h>

int main() {

    int w,h;
    scanf("%d%d", &w,&h);

    int cw = 60;
    int ch = 130;
    
    if((cw <= w) && (ch >= h)) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}