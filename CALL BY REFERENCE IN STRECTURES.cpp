//CALL BY REFERENCE 
#include<stdio.h>
struct student 
{
	int id;
	char name[20];
	double cgpa;
};
typedef struct student s;
void fun(s *o){
	printf("Adress in Fun Function : %d\n",o);
	o->id =101;
}
int main(){
	s s1={1,"Surendra",7.7};
	printf("Adress in main Function : %d\n",&s1);
	fun(&s1);
	printf("%d",s1.id);
	return 0;
}