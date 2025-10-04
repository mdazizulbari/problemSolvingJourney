// https://www.codechef.com/problems/ASSIGNMNT
#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y, z;
        scanf("%d%d%d", & x, & y, & z);
        int need = x * y;
        int has = z * (24 * 60);
        if (need <= has)
            printf("YES\n");
        else printf("NO\n");
    }

}