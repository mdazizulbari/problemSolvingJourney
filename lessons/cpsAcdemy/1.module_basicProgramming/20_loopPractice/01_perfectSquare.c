#include <stdio.h>
#include <stdbool.h>
// time limit 1s
// 1 <= n <= 10^10

// borgomul hole 10^10 er half ei code er ans ashe jabe
// generally in 1s judge can do 10^8 operations

int main()
{
    long long n;
    scanf("%lld", &n);
    bool isPerfect = false;

    // for (int i = 1; i <= n; i++)
    // the above code will go over the time limit

    for (int i = 1; i <= n; i++)
    {
        if (i * i == n)
        {
            printf("%d is a perfect square\n", n);
            isPerfect = true;
        }
    }
    if (!isPerfect)
        printf("%d is not a perfect square\n", n);

    return 0;
}