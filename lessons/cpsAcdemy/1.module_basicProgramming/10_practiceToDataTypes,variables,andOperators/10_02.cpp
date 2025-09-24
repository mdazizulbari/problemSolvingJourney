#include <stdio.h>

int main() {
	// https://www.codechef.com/problems/BNE_APT
	
	int n, m, x, y;
    // bones, blood, bones t, blood t
	scanf("%d%d", &n, &m);
	scanf("%d%d", &x, &y);

    int total = (n * x) + (m * y);
    printf("%d\n", total);

    return 0;
}