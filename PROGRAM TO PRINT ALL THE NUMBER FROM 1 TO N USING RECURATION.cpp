//PROGRAM TO PRINT ALL THE NUMBER FROM 1 TO N USING RECURATION
#include<stdio.h>
void m(int n){
	if(n==0){
		return;
	}
	m(n-1);
	printf("%d ",n);
}
int main(){
	int n;
	scanf("%d",&n);
	m(n);
	return 0;
}