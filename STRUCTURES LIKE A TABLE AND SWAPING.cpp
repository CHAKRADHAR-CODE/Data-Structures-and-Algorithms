#include<stdio.h>
struct man{
	int id;
	char name[30];
	int age;
	int salary;
	char orgination[40];
};
typedef struct man x;
void printing(x emps[],int n){
	printf("ID\tNAME\tAGE\tSAL\tORG\n");
	for(int i=0;i<n;i++){
		printf("%d\t%s\t%d\t%d\t%s\n",emps[i].id,emps[i].name,emps[i].age,emps[i].salary,emps[i].orgination);
	}
}
void bubble_sort(x emps[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(emps[j].id > emps[j+1].id) // BASED ON THE SORTING ID AS INTEGER 
			{
				x temp=emps[j];
				emps[j]=emps[j+1];
				emps[j+1]=temp;
			}
		}
	}
}
int main(){
	x e1={1,"cs",17,100000,"Google"};
	x e2={1,"SP ALLUDU",19,200000,"MICROSOFT"};
	x emps[2]={e1,e2};
	printing(emps,2);
	printf("After shorting : \n");
	bubble_sort(emps,2);
	printing(emps,2);
	return 0;
}