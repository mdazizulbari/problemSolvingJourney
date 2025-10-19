#include <stdio.h>
#include <string.h>

int main()
{
    printf("%c", (char)'a' + 1);

    char str[10] = "abcd";
    printf("%s\n", str);

    char str2[] = "abcdlljflak";
    printf("%s\n", str2);

    char str3[8];
    str3[0] = 'a';
    str3[1] = 'b';
    str3[2] = '\0'; // null char = this will prevent the str from outputing garbage values
    printf("%s\n", str3);

    // will not work
    // char str4[10];
    // str4="jfdasl";
    // printf("%s\n", str4);

    char str5[] = {'a', 'i', 'e', 'w'};
    printf("%s\n", str5);

    char str6[6] = {'a', 'i', 'e', 'w'};
    printf("%s\n", str6);

    char str7[15];
    scanf("%s",str7);
    printf("%s\n", str7);

    return 0;
}