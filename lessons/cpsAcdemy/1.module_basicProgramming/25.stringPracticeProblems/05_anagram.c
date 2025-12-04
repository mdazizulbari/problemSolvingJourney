#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int f1[26] = {0};
    int f2[26] = {0};

    for (int i = 0; i < n1; i++)
    {
        int index = s1[i] - 'a';
        f1[index]++;
    }

    for (int i = 0; i < n2; i++)
    {
        int index = s2[i] - 'a';
        f2[index]++;
    }

    int prb = 0;
    for (int i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            prb = 1;
            break;
        }
    }

    if (prb)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
}