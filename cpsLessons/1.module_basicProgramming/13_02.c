// https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU1
#include <stdio.h>

int main(){
/*
    (((3&5) | 4) ^ 7)
     011 = 3
     101 = 5
    --------  / = devide, | = bitwise or
     001 = 1
    ((1 | 4) ^ 7)
     001 = 1
     100 = 4
    --------
     101 = 5
    (5 ^ 7)
     101 = 5
     111 = 7
    --------
     010 = 2
*/
    printf("%d\n", (((3&5)|4)^7));
    
    return 0;
}