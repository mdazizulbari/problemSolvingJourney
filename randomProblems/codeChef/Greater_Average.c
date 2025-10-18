// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// grater average
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int a,b,c;
	    	scanf("%d%d%d", &a,&b,&c);
	    	int sum = a+b;
	    	int avg = sum/2;
	    	
	    	if (sum%2!=0) avg++;
	    	
	    	printf("sum=%d",sum);
	    	if(avg >c) printf("YES\n");
	    	else printf("NO\n");
	}
}