#include<stdio.h>
void Linear_Search(int x[],int n,int key){
	for(int i=0;i<n;i++){
		if(key==x[i]){
			printf("%d found at index %d.",key,i);
			break;
		}
	}
	printf("%d not found .",key);

}
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int key;
	scanf("%d",&key);
	Linear_Search(x,n,key);
	return 0;
}
