//Factoral of a number 
#include<stdio.h>
int m(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*m(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int f=m(n);
	printf("Number IS %d ",f);
	return 0;
}
