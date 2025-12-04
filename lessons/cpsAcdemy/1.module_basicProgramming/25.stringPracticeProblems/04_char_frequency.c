#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int n = strlen(str);
    int frq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';
        frq[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c = %d\n", 'a' + i, frq[i]);
    }

    return 0;
}