#include <stdio.h>

int main(){

    /*
    bitwise XOR = ONLY one will happen,
    true false = true
    1   ^   0    =   1
    false true = true 
    0   ^   1   =   1
    true true = false
    1   ^   1   =   0
    false false = false
    0   ^   0   =   0

    bitwise and(&),
    101 = 5
    110 = 6
    -------
    100 = 4

    bitwise XOR(^),
    0101 = 5
    0110 = 6
    --------
    0011 = 3
    1000 = 8
    --------
    1011 = 11


    */
    
    int x, y;
    scanf("%d %d", &x, &y);

    // int result = x & y;
    // int result = x | y;
    int result = x ^ y;
    printf("result = %d\n", result);
    
    return 0;
}