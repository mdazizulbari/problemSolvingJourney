// 
#include <stdio.h>

int main() {
    
    int x; //523
    scanf("%d", &x);
    
    int ekok = x - x / 10 * 10;
            // 523 - 523 / 10 * 10
            // 523 - 52(because not typecasting, or it's 52.3) * 10
            // 523 - 520
    printf("ekok = %d", ekok);

    x = x / 10;
    // 523 / 10 = 52
    int dosok = x - x / 10 * 10;
            // 52 - 52 / 10 * 10
            // 52 - 5(because not typecasting, or it's 5.2) * 10
            // 52 - 50
    printf("dosok = %d", dosok);
    
    return 0;
}