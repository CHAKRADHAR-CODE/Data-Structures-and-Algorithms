#include<stdio.h>
void cos(int x[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(x[j]>x[j+1]){
				int temp =x[j+1];
				x[j+1] = x[j];
				x[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	cos(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return 0;
}
