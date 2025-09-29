// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C
#include <stdio.h>

int main() {

    int a,b,sum;
    char op;

    for(;;){
        scanf("%d %c %d", &a,&op,&b);
        if(op=='?') break;
        sum = 0;

        if(op == '+'){
            sum=a+b;
        } 
        else if(op == '-'){
            sum=a-b;
        } 
        else if(op == '*'){
            sum=a*b;
        } 
        else if(op == '/'){
            sum=a/b;
        } 
        printf("%d\n", sum);
    }
    
    return 0;
}