#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    // 4643

    // int ones = (n % 10);
    // printf("%d\n", ones);

    // int tens = (n % 100) / 10;
    // printf("%d\n", tens);

    // int hundreds = (n % 1000) / 100;
    // printf("%d\n", hundreds);

    int displayNum = 0;
    int sum = 0;

    // this works until 7 digits
    // for (int i = 10;; i *= 10)
    // {
    //     // printf("%d\n", i);
    //     displayNum = (n % i) / (i / 10);
    //     if (n < (i / 10))
    //         break;
    //     printf("%d, ", displayNum);
    //     sum += displayNum;
    // }
    // printf("%d\n", sum);

    // this works until 9 or 10^8 digits
    for (int i = 10; n != 0; i *= 10)
    {
        // printf("%d\n", i);
        displayNum = (n % i) / (i / 10);
        // printf("%d, ", displayNum);
        n -= displayNum * (i / 10);
        // printf("(%d)", n);
        sum += displayNum;
    }
    printf("%d\n", sum);

    return 0;
}