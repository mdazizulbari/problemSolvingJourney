#include <stdio.h>

int main() {

    int t,n;
    scanf("%d ", &t);

    for(int i=1; i<=t;i++){
        scanf("%d", &n);
        // int sum = n/2;
        // int pc1 = sum;
        // int pc2 = sum;
        // if(n%2 != 0) pc2++;

        // different way,
        int pc1 = n/2;
        int pc2 = n-pc1;

        // different way,
        // int pc1;
        // int pc2;
        // if(n <= 10){
        //     pc1 = n;
        //     pc2 = 0;
        // }
        // else{
        //     pc1 = 10;
        //     pc2 = 10-n;
        // }
        
        printf("%d %d\n",pc1,pc2);
    }

    return 0;
}