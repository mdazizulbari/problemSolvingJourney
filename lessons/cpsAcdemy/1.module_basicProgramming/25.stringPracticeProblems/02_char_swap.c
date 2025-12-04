#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    scanf("%s", str);

    int n = strlen(str);

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        printf("i = %d, j = %d\n", i, j);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);

    return 0;
}