// https://atcoder.jp/contests/abc333/tasks/abc333_b
#include <stdio.h>

int main() {

    char s1,s2,t1,t2;
    // scanf("%c%c", &s1, &s2);
    // scanf("%c%c", &t1, &t2);
    scanf("%c%c %c%c", &s1, &s2, &t1, &t2);

    // int AB, BA, BC, CB, CD, DC, DE, ED, AE, EA = 1;
    // int AC, AD, BD, BE, CA, CE, DA, DB, EB, EC = 2;

    int A=1;
    int B=2;
    int C=3;
    int D=4;
    int E=5;

    int input1 = s1 - s2;
    int input2 = t1 - t2;

    if(input1 < 1) input1 = s2 - s1;
    if(input2 < 1) input2 = t2 - t1;

    if(input1 == 4) input1 = 1;
    if(input2 == 4) input2 = 1;
    
    if(input1 > 1) input1 = 2;
    if(input2 > 1) input2 = 2;

    if(input1 == input2){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    // int ans = input1;
    // printf("%d\n", ans);
    
    return 0;
}