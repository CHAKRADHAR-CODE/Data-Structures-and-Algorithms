#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    int a=x%4;
	    int b=x-a;
	    printf("%d\n",b);
	}
	return 0;
}
