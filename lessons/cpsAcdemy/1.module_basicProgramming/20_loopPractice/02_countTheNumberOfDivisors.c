// time limit 1s
// 1 <= n <= 10^10

// for example divisors of 10 are 1,2,5,10
// divisor = gunoniok in bangla

/*
divisors of 36
1 x 36
2 x 18
3 x 12
4 x 9
6 x 6
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Divisors of %d are \n", n);
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
            if (i != n / i)
            // to remove the 2nd 6 for the divisors of 36
            {
                printf("%d ", n / i);
                count++;
            }
        }
    }
    printf("\nTotal number of divisors is %d\n", count);
    return 0;
}
