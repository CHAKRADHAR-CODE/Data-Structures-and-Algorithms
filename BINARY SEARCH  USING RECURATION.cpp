#include<stdio.h>
int Binary_search(int arr[],int low,int high,int k)
{
    if(low>high){
    	return -1;
	}
	else{
		int mid=(low+high)/2;
		if(arr[mid]==k){
			return mid;
		}
		else if(arr[mid]>k){
			return Binary_search(arr,low,mid-1,k);
		}
		else{
			return Binary_search(arr,mid+1,high,k);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int k;
	scanf("%d",&k);
	int r=Binary_search(num,0,n-1,k);
	printf("%d",r);
}