// https://www.codechef.com/problems/VIDEOWORTH?tab=ide
#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int s, ans;
        scanf("%d", & s);
        ans = s * 24000;
        printf("%d\n", ans);
    }

}