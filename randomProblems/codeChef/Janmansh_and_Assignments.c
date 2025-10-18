// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS
// Janmansh and Assignments
#include <stdio.h>

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a;
        scanf("%d", &a);
        int sum = a + 3;

        if (sum < 10)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
