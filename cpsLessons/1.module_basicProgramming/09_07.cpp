#include <stdio.h>

int main() {

    // https://www.codechef.com/problems/PHONEYR

	int year;
	int phone;
	
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
	
	phone = year - year / 100 * 100;

    printf("K%d\n", phone);

    return 0;
}

