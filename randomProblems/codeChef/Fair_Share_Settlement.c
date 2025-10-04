// https://www.codechef.com/problems/FAIRSHARE
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k, z;
        scanf("%d%d", &n, &k);
        // printf("%d\n", n);

        int fairShare = n / (k + 1);
        int fSremainder = n % (k + 1);

        // if fSremainder = n, than fairShare = 0;
        int myTotalPay;
        if (fSremainder == n)
        {
            myTotalPay = fSremainder;
        }
        else
            myTotalPay = fSremainder + fairShare;

        printf("%d\n", myTotalPay);
    }

    return 0;
}