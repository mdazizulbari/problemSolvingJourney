// https://atcoder.jp/contests/abc326/tasks/abc326_a
#include <stdio.h>

int main() {
    // moving up two floors or less
    // moving down three floors or less

    int x, y;
    scanf("%d%d", &x, &y);

    if(x > y && x - y < 4){
        // going down
        printf("Yes\n");
        // printf("1\n");
    } 
    else if(x < y && y - x < 3) {
        // going up
        printf("Yes\n");
        // printf("2\n");
    } 
    else printf("No\n");

    return 0;
}