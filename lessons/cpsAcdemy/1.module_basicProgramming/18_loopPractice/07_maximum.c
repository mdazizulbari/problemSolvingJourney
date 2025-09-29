#include <stdio.h>

// input an integer n
// input n amount of integers
// output maximum among all numbers
// 0 <= n <= 1000000
// -1000 <= value of integers <= 1000

int main() {

    int n;
    scanf("%d", &n);

    int maximum=-1001;
    int input;

    for(int i=1; i<=n;i++){
        scanf("%d", &input);
        if(input>maximum) maximum=input;
    }

    printf("%d",maximum);
    
    return 0;
}