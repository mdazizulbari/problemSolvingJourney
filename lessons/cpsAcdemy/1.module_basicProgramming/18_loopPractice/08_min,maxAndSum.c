// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int max=-1000001;
    int min=1000001;
    long long sum=0;
    int input;

    for(int i=1; i<=n;i++){
        scanf("%d", &input);
        if(input>max) max=input;
        if(input<min) min=input;
        sum = sum + input;
    }

    printf("%d %d %lld\n",min,max,sum);
    
    return 0;
}