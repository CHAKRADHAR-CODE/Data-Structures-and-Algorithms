#include<stdio.h>
#include<string.h>
struct man{
	int id;
	char name[30];
	int age;
	int salary;
	char orgination[40];
};
typedef struct man x;
void printing(x emps[],int n){
	printf("ID\tNAME           \tAGE\tSAL\tORG\n");
	for(int i=0;i<n;i++){
		printf("%d\t%s\t%d\t%d\t%s\n",emps[i].id,emps[i].name,emps[i].age,emps[i].salary,emps[i].orgination);
	}
}
void bubble_sort(x emps[],int n){
	for(int i=0;i<n;i++){
		for(int    j=0;j<n-1;j++){
			if(strcmp(emps[j].orgination,emps[j+1].orgination)>0)// BASED ON THE SORTING ID AS INTEGER 
			{ // BASED ON THE SORTING ID AS string 
				x temp=emps[j];
				emps[j]=emps[j+1];
				emps[j+1]=temp;
			}
		}
	}
}
int main(){
	x e1={1,"BUSY PERSON ",17,100000,"T-HUB"};
	x e2={2,"SP ALLUDU",19,200000,"Google"};
	x e3={3,"Begam Boyfriend",19,200000,"MICROSOFT"};
	x emps[3]={e1,e2,e3};
	printing(emps,3);
	printf("\n \n After shorting : \n\n");
	
	bubble_sort(emps,3);
	printing(emps,3);
	return 0;
}