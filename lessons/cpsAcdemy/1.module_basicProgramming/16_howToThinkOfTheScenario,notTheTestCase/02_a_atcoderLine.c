// https://atcoder.jp/contests/abc352/tasks/abc352_a
#include <stdio.h>

int main() {

    int n,x,y,z;
    scanf("%d%d%d%d", &n,&x,&y,&z);

    // int remaining;
    // if(x < y){
    //     remaining = y - z;
    //     if(remaining <= x--) printf("Yes\n");
    //     else printf("No\n");
    // }
    // else{ //(x > y)
    //     remaining = x - z;
    //     if(remaining >= y--) printf("Yes\n");
    //     else printf("No\n");
    // }

    // understood the way after seeing the lecture
    if((x<=z && z<=y) || (y<=z && z<=x)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}