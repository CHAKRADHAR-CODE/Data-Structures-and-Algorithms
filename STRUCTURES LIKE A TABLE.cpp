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
int main(){
	x e1={1,"cs",17,100000,"Google"};
	x e2={1,"cs",17,100000,"Google"};
	x emps[2]={e1,e2};
	printing(emps,2);
	return 0;
}
