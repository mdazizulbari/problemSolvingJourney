// https://atcoder.jp/contests/abc328/tasks/abc328_b
// 11/11

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d[n + 1];
    int ans = 0;

    // getting input
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &d[i]);
        // printf("a=%d ", a[i]);
        // printf("b=%d ", b[i]);
    }

    // months loop
    for (int m = 1; m <= n; m++)
    {
        // days loop
        for (int dd = 1; dd <= d[m]; dd++)
        {
            // failed first approch
            // if ((dd % 11 == 0 && dd / 10 == m) || (m != 10 && m != 12 && dd == m))
            // {
            //     ans++;
            // }
            // else if ((dd / 10 == m) || (dd < 10 && dd == m))
            // {
            //     ans++;
            // }

            // another approach(failed)
            // int num = 0;
            // if (m < 10)
            // {
            //     num = m * 100 + dd;
            // }
            // else
            //     num = m * 1000 + dd;

            // if (num % 11 == 0)
            // {
            //     ans++;
            // }

            // another approach
            int mOnes = 0;
            int mTens = 0;
            int dOnes = dd % 10;
            int dTens = dd / 10;
            if (m <= 9)
            {
                // printf("%d ", dd);
                // printf("Ones=%d ", dOnes);
                // printf("tens=%d ", dTens);
                mOnes = m;
            }
            else if (m >= 10)
            {
                // if ((dOnes == 1 && dTens == 1) || (dOnes == 1 && dTens == 0))
                // {
                //     ans++;
                //     // printf("%d ", dd);
                // }
                mOnes = m % 10;
                mTens = m / 10;
            }
            /*
            1=2=3=4
            1=2,2=3,1=3
            1=4,2=4,3=4

            1=2=3
            1=2,2=3,1=3

            m1=m2=d1=d2
            if m2=0, m1=d1=d2
            if d2=0, m1=m2=d1
            */
            if ((mOnes == dOnes && mTens == dTens && mOnes == dOnes && mOnes == dTens && mTens == dTens && dOnes == dTens) || (mOnes == mTens && mTens == dOnes && mOnes == dOnes && dTens == 0) || (mOnes == dOnes && dTens == 0 && mTens == 0) || (mOnes == dOnes && dOnes == dTens && mOnes == dTens && mTens == 0))
            {
                ans++;
                // printf("%d ", dd);
            }
        }
    }

    printf("%d ", ans);
    return 0;
}