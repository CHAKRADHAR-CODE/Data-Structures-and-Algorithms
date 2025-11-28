#include <stdio.h>
#include<stdlib.h>
int main() {
	// your code goes here
	int t,m=0,c=0,d=0;
	scanf("%d",&t);
	while(t--){
	    int p1,p2;
		int x;
	    scanf("%d %d",&p1,&p2);
	    x=p1-p2;
		x=-abs(x);
		if(m<=x){
			m=x;
		}
		if(p1>p2){
	        c++;
	    }
	    else if(p1<p2){
	        d++;
	    }
	}
	if(c>d){
	    printf("1 %d\n",m);
	}
	else{
	    printf("2 %d\n",m);
	}
}