// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
// Subscriptions
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int a,b;
	    	scanf("%d%d", &a,&b);
	    	int sum = a/6;
	    	
	    	if(a%6!=0) sum++;
	    	
	    	int ans = b*sum;
	    	printf("%d\n",ans);
	}
}