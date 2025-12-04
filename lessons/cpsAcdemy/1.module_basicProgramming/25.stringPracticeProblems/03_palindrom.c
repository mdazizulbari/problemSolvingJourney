#include <stdio.h>
#include <string.h>

int main()
{
    // 1. Declare a large enough array to hold typical input
    char str[101]; // Holds up to 100 characters + null terminator

    // 2. Read the string directly
    scanf("%s", str); 

    // 3. Let C calculate 'n' for you
    int n = strlen(str);

    // 4. Create the 'rev' array based on the ACTUAL length
    char rev[n + 1]; 

    // The rest of your logic remains the same
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    rev[n] = '\0'; // Don't forget this!

    // printf("%s\n", str);
    // printf("%s\n", rev);

    if (strcmp(str, rev) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
