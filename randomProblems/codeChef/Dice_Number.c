// https://www.codechef.com/problems/DICENUM
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
        // printf("%d\n",a1);
        // printf("%d\n",a2);
        // printf("%d\n",a3);

        // int alice = (a1) + (a2) + a3;
        // int bob = (b1) + (b2) + b3;

        int alice;
        int bob;

        // got the way of sorting from gpt
        // // 7 2 9
        // if (a < b)
        // {
        //     int temp = a;
        //     a = b;
        //     b = temp;
        // }
        // if (a < c)
        // {
        //     int temp = a;
        //         // 7
        //     a = c;
        //     // a = 9
        //     c = temp;
        //     // c = 7
        // }
        // if (b < c)
        // {
        //     int temp = b;
        //         // 2
        //     b = c;
        //     // b = 7
        //     c = temp;
        //     // c = 2
        // }

        if (a1 < a2)
        {
            int temp = a1;
            a1 = a2;
            a2 = temp;
        }
        if (a1 < a3)
        {
            int temp = a1;
            a1 = a3;
            a3 = temp;
        }
        if (a2 < a3)
        {
            int temp = a2;
            a2 = a3;
            a3 = temp;
        }

        if (b1 < b2)
        {
            int temp = b1;
            b1 = b2;
            b2 = temp;
        }
        if (b1 < b3)
        {
            int temp = b1;
            b1 = b3;
            b3 = temp;
        }
        if (b2 < b3)
        {
            int temp = b2;
            b2 = b3;
            b3 = temp;
        }

        alice = (a1 * 100) + (a2 * 10) + a3;
        bob = (b1 * 100) + (b2 * 10) + b3;
        // printf("%d\n", alice);
        // printf("%d\n", bob);

        // if (a1 > a2 || b1 > b2)
        // {
        //     // 1 2
        //     // a b
        //     if (a1 > a3 || b1 > b3)
        //     {
        //         // 1 3
        //         // a c
        //         if (a3 > a2 || b3 > b2)
        //         {
        //             // 1 3 2
        //             alice = (a1 * 100) + (a3 * 10) + a2;
        //             bob = (b1 * 100) + (b3 * 10) + b2;
        //         }
        //         else
        //         {
        //             //  1 2 3
        //             alice = (a1 * 100) + (a2 * 10) + a3;
        //             bob = (b1 * 100) + (b2 * 10) + b3;
        //         }
        //     }
        //     else
        //     {
        //         // 3 1 2
        //         alice = (a3 * 100) + (a1 * 10) + a2;
        //         bob = (b3 * 100) + (b1 * 10) + b2;
        //     }
        // }
        // else
        // {
        //     if (a1 > a3 || b1 > b3)
        //     {
        //         // 2 1 3
        //         alice = (a2 * 100) + (a1 * 10) + a3;
        //         bob = (b2 * 100) + (b1 * 10) + b3;
        //     }
        //     else
        //     {
        //         if (a3 > a2 || b3 > b2)
        //         {
        //             // 3 2 1
        //             alice = (a3 * 100) + (a2 * 10) + a1;
        //             bob = (b3 * 100) + (b2 * 10) + b1;
        //         }
        //         else
        //         {
        //             // 2 3 1
        //             alice = (a2 * 100) + (a3 * 10) + a1;
        //             bob = (b2 * 100) + (b3 * 10) + b1;
        //         }
        //     }
        // }

        if (alice > bob)
            printf("Alice\n");
        else if (alice < bob)
            printf("Bob\n");
        else
            printf("Tie\n");
    }

    return 0;
}
