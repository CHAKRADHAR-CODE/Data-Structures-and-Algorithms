#include<stdio.h>
void mer(int x1[],int x2[],int n,int m){
	int i=0;
	int j=0;
	int k=0;
	int p=n+m;
	int x3[p];
	while(i<n && j<m){
		if(x1[i]<=x2[j]){
			x3[k]=x1[i];
			i++;
			k++;
		}
		else{
			x3[k]=x2[j];
			j++;
			k++;
		}
	}
	while(i<n){
		x3[k]=x1[i];
			i++;
			k++;
	}
	while(j<m){
		x3[k]=x2[j];
			j++;
			k++;
	}
	for(int z=0;z<p;z++){
		printf("%d ",x3[z]);
	}
} 
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int x1[n],x2[m];
	for(int i=0;i<n;i++){
		scanf("%d",&x1[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&x2[i]);
	}
	mer(x1,x2,n,m);
	return 0;
}