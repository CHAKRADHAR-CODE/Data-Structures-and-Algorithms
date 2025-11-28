#include<stdio.h>
void merg(int num1[],int a,int b,int c )
{
	int i=a;
	int j=b+1;
	int k=0;
	int num2[c];
	while(i<b && j<c)
	{
		if(num1[i]<=num1[j])
		{
			num2[k]=num1[i];
			i++;
			k++;
		}
		else
		{
			num2[k]=num1[j];
			j++;
			k++;
		}	
	}
	while(i<=b)
	{
		num2[k]=num1[i];
		i++;
		k++;
	}
	while(j<c)
	{
		num2[k]=num1[j];
		j++;
		k++;
	}
	for(int l=0;l<c;l++)
	{
		printf("%d ",num2[l]);
	}
}
int main()
{

	int num[]={31,47,91,144,258,7,19,21,33,44,57,100};
	
	merg(num,0,4,12);
}