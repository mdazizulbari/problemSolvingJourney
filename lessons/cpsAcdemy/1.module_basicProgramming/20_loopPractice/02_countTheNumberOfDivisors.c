// time limit 1s
// 1 <= n <= 10^10

// for example divisors of 10 are 1,2,5,10
// divisor = gunoniok in bangla

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Divisors of %d are \n", n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal number of divisors is %d\n", count);
    return 0;
}
