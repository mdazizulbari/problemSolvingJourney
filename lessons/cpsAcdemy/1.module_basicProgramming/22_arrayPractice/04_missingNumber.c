// https://cses.fi/problemset/task/1083
// missing number

// we did this problem by subtracting the sum method the last time
// this time we will use the frequency array method
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n - 1], f[n + 1] = {};
    /*
    n = the number of numbers we will get as input
    arr[n-1] will have 0 to 4 places
    f[n+1] will have 0 to 5 to get the value of 5, because our inputs aren't starting with zero

    max frequency array size = 10^6 - 10^7
    if it's more then that we will use map in future in stl module
    */

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        f[arr[i]]++;
    }

    int ans;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}