// https://www.codechef.com/problems/SURPLUS
#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int a1, a2, b1, b2;
        scanf("%d%d%d%d", & a1, & a2, & b1, & b2);
        // 1 = exports, 2 = imports
        int total_exports = a1 + b1;
        int total_imports = a2 + b2;
        if (total_imports > total_exports) {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
}