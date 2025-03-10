#include <stdio.h>

int main() {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&x,&y);
	    if(y<x)
	    {
	        printf("LOSS\n");
	    }
	    else if(x==y)
	    {
	        printf("NEUTRAL\n");
	        
	    }
	    else if(x<y)
	    {
	        printf("PROFIT\n");
	    }
	}

}

