// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
// mirror array
#include <stdio.h>

int main()
{
    int n, m;
    int arr[110][110];

    // getting input
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j][i]);
        }
    }

    // logic
    int willNotTake = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
