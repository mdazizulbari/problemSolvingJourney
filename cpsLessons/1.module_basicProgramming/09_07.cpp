#include <stdio.h>

int main() {

    // https://www.codechef.com/problems/PHONEYR

	int year;
	scanf("%d", &year);

    // n - n / 10 * 10
    // 2021 - 2021 / 10 * 10
    // 2021 - 202.1 * 10
    // 2021 - 202 * 10
    // 2021 - 2020
    // 1

    // n - n / 100 * 100
    // 2021 - 2021 / 100 * 100
    // 2021 - 20.21 * 100
    // 2021 - 20 * 100
    // 2021 - 2000
    // 21
	
	// phone = year - year / 100 * 100; // when there are supposed to be 00, it's only displaying 0


    int lastNum = year - year / 10 * 10;
            // 523 - 523 / 10 * 10
            // 523 - 52(because not typecasting, or it's 52.3) * 10
            // 523 - 520

    year = year / 10;
    // 523 / 10 = 52
    int secondLastNum = year - year / 10 * 10;
            // 52 - 52 / 10 * 10
            // 52 - 5(because not typecasting, or it's 5.2) * 10
            // 52 - 50

    printf("K%d%d\n", secondLastNum, lastNum);

    return 0;
}

