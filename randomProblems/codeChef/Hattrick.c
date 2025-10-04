// https://www.codechef.com/problems/HATTRICK
#include <stdio.h>

int main()
{
    int t;
    char a, b, c, d, e, f;
    scanf("%d ", &t);

    while (t--)
    {
        scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
        // printf("a=%c\n",a);
        // printf("b=%c\n",b);
        // printf("c=%c\n",c);
        // printf("c=%c\n",c);
        // printf("d=%c\n",d);
        // printf("e=%c\n",e);
        // printf("f=%c\n",f);

        // if ((a = "W", b = "W", c = "W") || (b = "W", c = "W", d = "W") || (c = "W", d = "W", e = "W") || (d = "W", e = "W", f = "W"))
 if ((a == 'W' && b == 'W' && c == 'W') ||
            (b == 'W' && c == 'W' && d == 'W') ||
            (c == 'W' && d == 'W' && e == 'W') ||
            (d == 'W' && e == 'W' && f == 'W'))
            printf("YES\n");   // Added newline for clarity
        else
            printf("NO\n");

        // if ((a = "W") && (b = "W") && (c = "W")) 
        //     printf("YES\n");
        // else if((b = "W") && (c = "W") && (d = "W")) 
        //     printf("YES\n");
        // else if((c = "W") && (d = "W") && (e = "W")) 
        //     printf("YES\n");
        // else if((d = "W") && (e = "W") && (f = "W"))
        //     printf("YES\n");
        // else
        //     printf("NO\n");

        /*
        www000
        0www00
        00www0
        000www
        */
    }
}
