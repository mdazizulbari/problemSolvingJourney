// https://atcoder.jp/contests/abc333/tasks/abc333_b
#include <stdio.h>

// int main() {
//     char s1,s2,t1,t2;
//     // scanf("%c%c", &s1, &s2);
//     // scanf("%c%c", &t1, &t2);
//     scanf("%c%c %c%c", &s1, &s2, &t1, &t2);

//     // int AB, BA, BC, CB, CD, DC, DE, ED, AE, EA = 1;
//     // int AC, AD, BD, BE, CA, CE, DA, DB, EB, EC = 2;

//     int A=1;
//     int B=2;
//     int C=3;
//     int D=4;
//     int E=5;

//     int input1 = s1 - s2;
//     int input2 = t1 - t2;

//     if(input1 < 1) input1 = s2 - s1;
//     if(input2 < 1) input2 = t2 - t1;

//     if(input1 == 4) input1 = 1;
//     if(input2 == 4) input2 = 1;
    
//     if(input1 > 1) input1 = 2;
//     if(input2 > 1) input2 = 2;

//     if(input1 == input2){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }

//     return 0;
// }

    /*
    we can even use asci values of A,B,C here
    for example,
    A=65
    B=66
    C=67
    C-A = 67-65 = 2
    D-1 = 68-65 = 3
    if the diff is more than 2
    we will subtract the diff value with the numbers of sides we have, which is 5
    5-3 = 2

    doing the solution according to the lecture way
    */
#include <math.h>
int main(){
    char a,b,c,d;
    scanf("%c%c %c%c", &a, &b, &c, &d);

    int distance1 = abs(b-a);
    // we can use abs to get the absolute value
    if(distance1 > 2) distance1 = 5 - distance1;

    int distance2 = abs(d-c);
    if(distance2 > 2) distance2 = 5 - distance2;

    if(distance1 == distance2) printf("Yes\n");
    else printf("No\n");

    return 0;
   }