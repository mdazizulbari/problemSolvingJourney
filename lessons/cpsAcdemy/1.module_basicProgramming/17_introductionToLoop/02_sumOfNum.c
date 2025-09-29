#include <stdio.h>

int main() {

    int sum = 0;
    for(int i = 2; i <= 8; i+=2){
        printf("%d\n",i);
        sum += i;
        // printf("%d\n",sum);
    }
    printf("%d\n",sum);

    return 0;
}