#include <stdio.h>

int main() {

    /*
    got a better understanding after seeing the lecture,
    given, (a1+a2+a3+a4)/n >= m
    or, a1+a2+a3+a4 >= m*n
    so, a4 >= (m*n)-(a1+a2+a3)
    */

    int n,k,m,a;
    scanf("%d %d %d", &n,&k,&m);

    int fullMarks = k;
    int avg = m;
    int totalNeeded = avg*n;
    int totalGot=0;
    /*
    first i tried like this,
        int totalGot;
    atcoder was saying that the ans was wrong
        int totalGot=0;
    the moment i gave the 0, it said it's correct
    */

    for(int i=1; i<=(n-1); i++){
        scanf("%d",&a);
        totalGot += a;
    }

    int moreNeeded = totalNeeded - totalGot;

    if(moreNeeded < 0) printf("0\n");
    else if(moreNeeded <= fullMarks) printf("%d\n",moreNeeded);
    else if(moreNeeded > fullMarks) printf("-1\n");
    
    return 0;
}