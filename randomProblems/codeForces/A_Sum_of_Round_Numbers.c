// https://codeforces.com/contest/1352/problem/A
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int nc = n;
        int count = 0;

        // getting how many numbers are there which are grater than zero
        while (n > 0)
        {
            int lastDigit = n % 10;
            n /= 10;

            if (lastDigit > 0)
            {
                count++;
            }
        }
        printf("%d\n", count);

        // printing out the numbers with added zeros as long as their position
        int position = 1;
        while (nc > 0)
        {
            int lastDigit = nc % 10;
            nc /= 10;

            if (lastDigit > 0)
            {
                int sum = lastDigit * position;
                printf("%d ", sum);
            }
            position *= 10;
        }
        printf("\n");
    }

    return 0;
}