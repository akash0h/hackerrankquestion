#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    if(y>x){
	        printf("PROFIT\n");
	    }
	    else if(x==y){
	        printf("NEUTRAL\n");
	    }
	    else{
	        printf("LOSS\n");
	    }
	}
	return 0;
}

