// https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en
#include <stdio.h>

int main() {

    int a, b, c;
    int input;
    scanf("%d%d%d", &input);
    
    c = input - input / 10 * 10;  
        // 523 - 523 / 10 * 10
        // 523 - 52(because not typecasting, or it's 52.3) * 10
        // 523 - 520
        
    input = input / 10;
    // 523 / 10 = 52
    b = input - input / 10 * 10;
            // 52 - 52 / 10 * 10
            // 52 - 5(because not typecasting, or it's 5.2) * 10
            // 52 - 50
            
    a = input / 10;
            // 52 / 10 = 5

    int abc = a * 100 + b * 10 + c;
    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;

    int sum = abc + bca + cab;
    printf("%d\n", sum);
    
    // printf("%d%d%d\n", a,b,c);
    // printf("%d\n", a);
    // printf("%d\n", b);
    // printf("%d\n", c);

    return 0;
}