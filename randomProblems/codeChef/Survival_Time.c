// https://www.codechef.com/problems/FIZZBUZZ23_2
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, d;
        scanf("%d %d %d", &n, &x, &d);

        int dailyNeed = 5*x;
        int canSurvive = n/dailyNeed;
        int totalSDays = canSurvive+d;

        printf("%d\n", totalSDays);
    }
}