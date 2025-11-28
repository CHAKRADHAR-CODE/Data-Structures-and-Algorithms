#include<stdio.h>
struct data{
	int id;
	char name[20];
	double cgpa;
};
typedef struct data x;
void rd(x *s)
{
	printf("ENTER ID : ");
	scanf("%d",&s->id);
	printf("ENTER NAME : ");
	scanf("%d",&s->name);
	printf("ENTER CGPA : ");
	scanf("%d",&s->cgpa);
}
int main()
{
	x s1;
	rd(&s1);
	x s2;
	rd(&s2);
	x s3;
	rd(&s3	);
}