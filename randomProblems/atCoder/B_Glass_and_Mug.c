// https://atcoder.jp/contests/abc332/tasks/abc332_b
#include <stdio.h>

int main()
{
    int k, g, gw, m, mw, mtg;
    /*
    k = operations
    g = glass capacity
    m = mug capacity
    */
    k = 0;
    g = 0;
    m = 0;
    scanf("%d%d%d", &k, &g, &m);
    // printf("%d %d %d\n", k, g, m);

    gw = 0;
    mtg = 0;
    mw = 0;

    while (k--)
    {
        // printf("at start = %d %d %d\n", k, gw, mw);
        if (gw == g) // if glass if full
        {
            gw = 0; // discarding water
        }
        else if (mw == 0) // if mug is empty
        {
            mw = m; // filling up mug
        }
        else
        {
            if (mw >= g)
            // when have more water than or equal to glass capacity, it fulls glass
            {
                mtg = g; // giving away water equal to glass capacity
                // mw = mw - g;
            }
            // when have LESS water than glass capacity, we make the mug empty
            else
            {
                mtg = mw; // giving away all the mug water
                // mw = 0;
            }
            mw = mw - mtg; // updating the mug value
            gw = mtg;      // pouring the water to glass
        }

        // if (mw == m) // if mug is full4
        // {
        //     mtg = mw - g; // filling up glass
        //     // 100
        // }
        // // form the 2nd loop
        // if (mtg < 0) // if the mug have less water than glass capacity
        // {
        //     mtg = mw;
        // }
        // gw = mtg; // filling up glass
        // if (gw == g) // if glass if full
        // {
        //     g = 0; //discarding water
        // }

        // printf("at end = %d %d %d\n", k, gw, mw);
    }

    printf("%d %d\n", gw, mw);

    return 0;
}