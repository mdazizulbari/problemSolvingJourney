// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
// search in matrix
#include <stdio.h>

int main()
{
    int n, m, x;
    int arr[110][110];

    // getting input
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) // i = n
    {
        for (int j = 0; j < m; j++) // j = m
        {
            scanf("%d", &arr[j][i]);
        }
    }
    scanf("%d", &x);

    // logic
    int willNotTake = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[j][i] == x)
            {
                willNotTake++;
            }
        }
    }

    // output
    if (willNotTake)
    {
        printf("will not take number");
    }
    else
        printf("will take number");

    return 0;
}