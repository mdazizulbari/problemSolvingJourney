#include <stdio.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while(tc--){
        int num;
        scanf("%d", &num);
        if(num%2 == 0) printf("even\n");
        else printf("odd\n");
    }
    
    return 0;
}