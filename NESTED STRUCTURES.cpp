//Nested Structures 
#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
typedef struct date d;
struct student{
	int id;
	char name[100];
	float scgpa;
	char collage[100];
	d dof;
};
typedef struct student s;
void printing(s m[],int n){
	printf("ID\tName\tScgpa\tCollage\tDof\n");
	for(int i=0;i<n;i++){
		printf("%d\t%s\t%.2f\t%s\t%d-%d-%d\n",m[i].id,m[i].name,m[i].scgpa,m[i].collage,m[i].dof.day,m[i].dof.month,m[i].dof.year);
	}
}
int main(){
	s m1={1,"rohit",8.6,"aus",{10,12,2027}};
	s m2={2,"surendra",7.9,"aec",{1,2,2020}};
	s m[2]={m1,m2};
	printing(m,2);
	return 0;
}